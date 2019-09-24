; void ft_cat(int fd);

%define MACH_SYSCALL(n)	0x2000000 | n
%define READ		3
%define WRITE		4
%define STDOUT		1
%define BUFF_SIZE	1024

section .text
	global _ft_cat

_ft_cat:
	push rbp
	mov rbp, rsp

	push rbx
	sub rsp, 8
	sub rsp, BUFF_SIZE

	mov rbx, rdi

_loop:
	mov rdi, rbx
	mov rsi, rsp
	mov rdx, BUFF_SIZE
	mov rax, MACH_SYSCALL(READ)
	syscall

	jc _exit ; error (errno has been set)
	cmp rax, 0
	jle _exit

	mov rdi, STDOUT
	mov rsi, rsp
	mov rdx, rax
	mov rax, MACH_SYSCALL(WRITE)
	syscall

	jmp _loop

_exit:

	add rsp, BUFF_SIZE
	add rsp, 8
	pop rbx

	leave
	ret

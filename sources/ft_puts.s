; int ft_puts(char const *s);

%define MACH_SYSCALL(n)	0x2000000 | n
%define WRITE		4
%define STDOUT		1

section .data
null_str:
	.str db "(null)"
	.len equ $ - null_str.str

section .text
	extern _ft_strlen
	global _ft_puts

_null_string:
	lea rsi, [rel null_str.str]
	mov rdx, null_str.len
	jmp _write_string

_ft_puts:
	push rbp
	mov rbp, rsp

	test rdi, rdi
	jz _null_string

	push rdi
	sub rsp, 8
	
	call _ft_strlen
	mov rdx, rax

	add rsp, 8
	pop rsi

_write_string:
	mov rdi, STDOUT
	mov rax, MACH_SYSCALL(WRITE)
	syscall

	push rax
	push 0xA

	mov rax, MACH_SYSCALL(WRITE)
	mov rsi, rsp
	mov rdx, 1
	syscall
	
	pop rsi
	pop rax
	inc rax

	leave
	ret

; int ft_toupper(int c);

section .text
	global _ft_toupper

_ft_toupper:
	push rbp
	mov rbp, rsp

	mov rax, rdi

	cmp rdi, 97
	jl _exit
	cmp rdi, 122
	jg _exit

	sub rax, 32

_exit:
	leave
	ret

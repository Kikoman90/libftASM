; int ft_isprint(int c);

section .text
	global _ft_isprint

_ft_isprint:
	push rbp
	mov rbp, rsp

	mov rax, 0

	cmp rdi, 32
	jl _negative
	cmp rdi, 126
	jg _negative

	mov rax, 1

_negative:
	leave
	ret

; int ft_isdigit(int c);

section .text
	global _ft_isdigit

_ft_isdigit:
	push rbp
	mov rbp, rsp

	mov rax, 0

	cmp rdi, 48
	jl _negative
	cmp rdi, 57
	jg _negative

	mov rax, 1
	
_negative:
	leave
	ret

; int ft_isascii(int c);

section .text
	global _ft_isascii

_ft_isascii:
	push rbp
	mov rbp, rsp

	mov rax, 0

	cmp rdi, 0
	jl _negative
	cmp rdi, 127
	jg _negative

	mov rax, 1
	
_negative:
	leave
	ret

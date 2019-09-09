;	int ft_isascii(int c);

section .text
	global _ft_isascii

_ft_isascii:
	push rbp
	mov rbp, rsp

	mov rax, 0

	cmp rdi, 0
	jl negative
	cmp rdi, 127
	jg negative

	mov rax, 1
	
negative:
	leave
	ret

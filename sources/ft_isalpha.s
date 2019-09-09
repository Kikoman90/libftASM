; int ft_isalpha(int c);

section .text
	global _ft_isalpha

_ft_isalpha:
	push rbp
	mov rbp, rsp
	
	mov rax, 0

	cmp rdi, 65
	jl _negative
	cmp rdi, 91
	jl _positive

	cmp rdi, 97
	jl _negative
	cmp rdi, 122
	jg _negative

_positive:
	mov rax, 1
	
_negative:
	leave
	ret

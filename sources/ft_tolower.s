; int ft_tolower(int c);

section .text
	global _ft_tolower

_ft_tolower:
	push rbp
	mov rbp, rsp

	mov rax, rdi

	cmp rdi, 65
	jl _exit
	cmp rdi, 90
	jg _exit

	add rax, 32

_exit:
	leave
	ret

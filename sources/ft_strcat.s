; char *ft_strcat(char *s1, char const *s2);
; rdi, rsi

section .text
	extern _ft_memcpy
	extern _ft_strlen
	global _ft_strcat

_ft_strcat:
	push rbp
	mov rbp, rsp

	push rdi
	push rsi

	mov rdi, rsi

	call _ft_strlen

	mov rdx, rax
	inc rdx

	mov rdi, [rsp + 8]	; get rdi

	call _ft_strlen

	pop rsi
	mov rdi, [rsp]
	add rdi, rax
	sub rsp, 8

	call _ft_memcpy

	add rsp, 8
	pop rax

	leave
	ret

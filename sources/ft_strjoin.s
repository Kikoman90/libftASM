; char *ft_strjoin(char const *s1, char const *s2);

section .text
	extern _malloc
	extern _ft_strlen
	extern _ft_memcpy
	global _ft_strjoin

_ft_strjoin:
	push rbp
	mov rbp, rsp
	
	push rsi
	push rdi

	mov rdi, rsi
	call _ft_strlen

	inc rax
	mov rdi, [rsp]
	push rax
	sub rsp, 8

	call _ft_strlen

	add rsp, 8
	mov rdi, [rsp]
	push rax
	add rdi, rax
	call _malloc

	test rax, rax
	jz _exit

	mov rdi, rax
	mov rsi, [rsp + 16]
	mov rdx, [rsp]
	call _ft_memcpy

	pop rcx
	push rax
	mov rdi, rax
	add rdi, rcx
	mov rsi, [rsp + 24]
	mov rdx, [rsp + 8]	
	call _ft_memcpy

	mov rax, [rsp]

_exit:
	add rsp, 32
	leave
	ret

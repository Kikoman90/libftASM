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

	inc rax ; length of s2 + 1 (for '\0')
	mov rdi, [rsp] ; get rdi
	push rax
	sub rsp, 8

	call _ft_strlen

	add rsp, 8
	mov rdi, [rsp]
	push rax ; push length of s1
	add rdi, rax ; sum
	call _malloc

	test rax, rax
	jz _exit

	mov rdi, rax
	mov rsi, [rsp + 16] ; rdi
	mov rdx, [rsp] ; length of s1
	call _ft_memcpy ; copy s1

	pop rcx ; length of s1
	push rax ; store address (for return)
	mov rdi, rax
	add rdi, rcx
	mov rsi, [rsp + 24] ; rsi
	mov rdx, [rsp + 8] ; length of s2 + 1 (for '\0')
	call _ft_memcpy

	mov rax, [rsp] ; return address

_exit:
	add rsp, 32 ; clear stack
	leave
	ret

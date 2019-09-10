; char *ft_strdup(char const *src);

section .text
	extern _malloc
	extern _ft_strlen
	extern _ft_memcpy
	global _ft_strdup

_ft_strdup:
	push rbp
	mov rbp, rsp
	
	push rdi
	sub rsp, 8
	call _ft_strlen
	add rsp, 8
	
	inc rax
	push rax

	mov rdi, rax
	call _malloc

	pop rdx
	pop rsi

	test rax, rax
	jz _exit

	mov rdi, rax
	call _ft_memcpy

_exit:
	leave
	ret

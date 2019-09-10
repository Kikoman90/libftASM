; void *ft_memcpy(void *dst, const void *src, size_t n);
; rdi, rsi, rdx

section .text
	global _ft_memcpy

_ft_memcpy:
	push rbp
	mov rbp, rsp

	mov rax, rdi
	mov rcx, rdx
	cld
	rep movsb

	leave
	ret

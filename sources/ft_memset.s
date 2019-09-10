; void *ft_memset(void *s, int c, size_t n);
; rdi, rsi, rdx

section .text
	global	_ft_memset

_ft_memset:
	push rbp
	mov rbp, rsp
	
	push rdi

	mov rcx, rdx
	mov ax, si
	cld
	rep stosb
	
	pop rax

	leave
	ret

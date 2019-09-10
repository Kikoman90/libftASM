; void ft_bzero(void *s, size_t n);
; rdi, rsi

section .text
	global _ft_bzero

_ft_bzero:
	push rbp
	mov rbp, rsp

	xor rcx, rcx

_set_to_zero:
	cmp rcx, rsi
	je _end_loop
	mov BYTE [rdi + rcx], 0
	inc rcx
	jmp _set_to_zero

_end_loop:
	leave
	ret

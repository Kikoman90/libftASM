; char *ft_strdup(char const *src);
;

section .text
	extern _malloc
	extern _ft_strlen
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

	pop rcx
	pop rsi
	mov rdi, rax
	rep movsb
	mov rax, rdi

	leave
	ret

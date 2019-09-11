; int ft_strcmp(char const *s1, char const *s2);

section .text
	global _ft_strcmp

_ft_strcmp:
	push rbp
	mov rbp, rsp

; get smaller strlen (+1 for \0) -> rcx
; rep while comparison is zero (same string)
; sub rdi + (smallerstrlen - rcx), rsi + (smallerstrlen - rcx)
	

	leave
	ret


; int ft_iclamp(int i, int min, int max);
; edi, esi, edx

section .text
	global _ft_iclamp

_ft_iclamp:
	push rbp
	mov rbp, rsp

_min_check:
	cmp edi, esi
	jg _max_check
	
	mov edi, esi
	jmp _exit

_max_check:
	cmp edi, edx
	jle _exit

	mov edi, edx

_exit:
	mov eax, edi
	leave
	ret

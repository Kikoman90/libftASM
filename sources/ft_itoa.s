; char *ft_itoa(int i);

section .text:
	extern _malloc
	global _ft_itoa

_ft_itoa:
	push rbp
	mov rbp, rsp

	xor ecx, ecx
	xor edx, edx
_get_length:
	test edi, edi
	js _is_negative

	jmp _length_loop

_is_negative:
	mov edx, 1
	inc ecx
	neg edi

_length_loop:
	




	leave
	ret

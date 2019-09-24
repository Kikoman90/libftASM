; int ft_atoi(char const *str);

section .text
	global _ft_atoi

_ft_atoi:
	push rbp
	mov rbp, rsp

	xor eax, eax
	xor ecx, ecx
	xor edx, edx

	jmp _space_loop

_space_inc:
	inc rdi

_space_loop:
	cmp BYTE [rdi], 32 ; ' '
	je _space_inc
	cmp BYTE [rdi], 9
	jl _get_sign
	cmp BYTE [rdi], 13	
	jg _get_sign
	jmp _space_inc

_get_sign:
	cmp BYTE [rdi], 43 ; '+'
	je _digit_inc
	cmp BYTE [rdi], 45 ; '-'
	jne _digit_loop

	mov edx, 1 ; store sign = true

_digit_inc:
	inc rdi

_digit_loop:
	mov cl, BYTE [rdi]
	cmp cl, 48 ; '0'
	jl _sign
	cmp cl, 57 ; '9'
	jg _sign

	imul eax, 10
	sub cl, 48
	add eax, ecx
	jmp _digit_inc

_sign:
	test edx, edx
	jz _exit

	neg eax

_exit:
	leave
	ret

; char *ft_itoa(int i);

section .text
	extern _malloc
	global _ft_itoa

_ft_itoa:
	push rbp
	mov rbp, rsp

	xor ecx, ecx
	mov eax, edi
	mov ebx, 10

_get_length:
	test edi, edi
	js _is_negative

	push 0 ; number is positive
	jmp _length_loop

_is_negative:
	inc ecx
	neg edi
	push 1 ; number is negative

_length_loop:
	inc ecx
	xor edx, edx ; edx = dividend high half (low half in eax)
	div ebx ; divide by 10
	test eax, eax ; quotient
	jz _create_string
	jmp _length_loop

_create_string:
	
	push rdi
	push rcx
	sub rsp, 8

	mov edi, ecx
	inc ecx ; for '\0'
	call _malloc

	add rsp, 8
	pop rcx
	pop rdi

	test rax, rax
	jz _malloc_fail

	mov rbx, rax ; rbx contains start address
	add rbx, rcx ; move to last character
	mov BYTE [rbx], 0 ;'\0'
	mov eax, edi
	mov ecx, 10

_main_loop:
	dec rbx
	xor edx, edx
	div ecx ; divide by 10
	add dl, 48
	mov BYTE [rbx], dl ; remainder of division is in edx
	test eax, eax ; quotient
	jz _sign
	jmp _main_loop

_sign:
	pop rdx
	test edx, edx
	jz _success_exit

	dec rbx
	mov BYTE [rbx], 45 ; add '-'

_success_exit:
	mov rax, rbx
	jmp _exit

_malloc_fail:
	pop rdx

_exit:
	leave
	ret

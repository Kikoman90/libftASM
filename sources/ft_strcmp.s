; int ft_strcmp(char const *s1, char const *s2);

section .text
	global _ft_strcmp

_ft_strcmp:
	push rbp
	mov rbp, rsp

	xor rax, rax
	xor rdx, rdx

_loop:
	mov al, BYTE [rdi]
	mov dl, BYTE [rsi]
	test al, al
	jz _return
	test dl, dl
	jz _return
	cmp al, dl
	jne _return
	inc rdi
	inc rsi
	jmp _loop

_return:
	sub eax, edx

	leave
	ret

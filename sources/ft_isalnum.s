;	int ft_isalnum(int c);

section .text
	extern _ft_isalpha
	extern _ft_isdigit
	global _ft_isalnum

_ft_isalnum:
	push rbp
	mov rbp, rsp

	call _ft_isdigit

	test rax, 1
	jnz exit

	call _ft_isalpha

exit:
	leave
	ret

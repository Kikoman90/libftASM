# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_bzero.s                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fsidler <fsidler@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/24 12:28:19 by fsidler           #+#    #+#              #
#    Updated: 2019/06/24 17:57:30 by fsidler          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

%define MACH_SYSCALL(n)    0x2000000 | n
%define WRITE              4
%define STDOUT             1

; void ft_bzero(void *s, size_t n);
;					  rdi,		rsi

section .text
	global _ft_bzero

_ft_bzero:
	push rbp
	mov rbp, rsp

	xor rcx, rcx

set_to_zero:
	cmp rcx, rsi
	je end_loop
	mov BYTE [rdi + rcx], 0
	inc rcx
	jmp set_to_zero

end_loop:
	leave
	ret

section .data
	msg db "LMAO", 0xA, 0xD
	len equ $- msg

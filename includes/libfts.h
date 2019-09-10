/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libfts.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsidler <fsidler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 15:55:57 by fsidler           #+#    #+#             */
/*   Updated: 2019/09/10 18:11:30 by fsidler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTS_H
# define LIBFTS_H

# include <sys/types.h>
# include <stdio.h>

// %define MACH_SYSCALL(n)    0x2000000 | n
// %define WRITE              4
// %define STDOUT             1

void	ft_bzero(void *s, size_t n);

char	*ft_strcat(char *s1, char const *s2);
char	*ft_strdup(char const *src);

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);

int		ft_tolower(int c);
int		ft_toupper(int c);

int		ft_puts(char const *s);

size_t	ft_strlen(char const *str);

void	*ft_memcpy(void *dst, void const *src, size_t n);
void	*ft_memset(void *dst, int c, size_t n);

void	ft_cat(int fd);

#endif

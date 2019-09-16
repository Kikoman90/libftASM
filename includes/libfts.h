/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libfts.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsidler <fsidler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 15:55:57 by fsidler           #+#    #+#             */
/*   Updated: 2019/09/16 15:00:51 by fsidler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTS_H
# define LIBFTS_H

# include <sys/types.h>
# include <stdio.h>
# include <stdlib.h>

int		ft_atoi(char const *str);

void	ft_bzero(void *s, size_t n);

void	ft_cat(int fd);

int		ft_iclamp(int i, int min, int max);

int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);

int		ft_tolower(int c);
int		ft_toupper(int c);

void	*ft_memcpy(void *dst, void const *src, size_t n);
void	*ft_memset(void *dst, int c, size_t n);

int		ft_puts(char const *s);

char	*ft_strcat(char *s1, char const *s2);
int		ft_strcmp(char const *s1, char const *s2);
char	*ft_strdup(char const *src);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlen(char const *str);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsidler <fsidler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 15:53:46 by fsidler           #+#    #+#             */
/*   Updated: 2019/06/24 18:01:12 by fsidler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
#include <stdio.h>//
#include <strings.h>//
//

#include "libfts.h"

int		main(void)
{
	char patrick[10] = "123456789";
	size_t length = 9;
	size_t i = 0;

	printf("before bzero:\n");
	while (i < length)
		printf("%c", patrick[i++]);
	printf("\nafter bzero:\n");
	ft_bzero((void*)patrick, length);
	i = 0;
	while (i < length)
		printf("%c", patrick[i++] + 48);
	printf("\n");
	return (0);
}

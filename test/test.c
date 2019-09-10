/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsidler <fsidler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 15:53:46 by fsidler           #+#    #+#             */
/*   Updated: 2019/09/10 19:06:36 by fsidler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libfts.h"

#include <fcntl.h>
#include <unistd.h>

int		main(void)
{
	/*char patrick[10] = "123456789";
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
	printf("isalpha('b')?\n");
	if (ft_isalpha('b'))
		printf("Yes\n");
	else
		printf("No\n");
	printf("isalpha(-3)\n");
	if (ft_isalpha(-3))
		printf("Yes\n");
	else
		printf("No\n");*/

	//ft_cat(0);
	int file_fd = open("test/test_cat.txt", O_RDONLY);
	printf("file_fd is %d\n", file_fd);
	ft_cat(file_fd);
	close(file_fd);

	ft_cat(0);

	return (0);
}

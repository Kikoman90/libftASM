/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsidler <fsidler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 15:53:46 by fsidler           #+#    #+#             */
/*   Updated: 2019/09/16 16:14:16 by fsidler          ###   ########.fr       */
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
	/*int file_fd = open("test/test_cat.txt", O_RDONLY);
	printf("file_fd is %d\n", file_fd);
	ft_cat(file_fd);
	close(file_fd);

	ft_cat(0);*/

	/*char *lol;
	char *mama = "Mouche, mouchelette\nMoucheronnette, moucheron\n";
	char papa[] = "Demain c'est ta fete\nToutes les mouches danseront\n";

	if (!(lol = ft_strjoin(mama, papa)))
		printf("strjoin failed\n");
	else
	{
		printf("%s", lol);
		free(lol);
	}*/

	//printf("atoi makes this : %d\n", ft_atoi("		  -0090008"));
	//printf("atoi makes this : %d\n", ft_atoi("	+3a45\n"));
	//printf("atoi makes this : %d\n", ft_atoi("	-0"));


	char *lol1 = "abcz";
	char *lol2 = "abda";

	printf("ft_strcmp(lol1, lol2) = %i\n", ft_strcmp(lol1, lol2));

/*
	int min = -2000;
	int max = -3000;

	int a2 = 2;
	int b15 = 15;
	int c16 = 16;
	int d_1000 = -1000;
	int e_12841 = -12841;

	printf("min = %d | max = %d\n", min, max);
	printf("a2 clamp = %d\nb15 clamp = %d\nc16 clamp %d\nd_1000 clamp = %d\ne_12841 clamp = %d\n", \
		ft_iclamp(a2, min, max), ft_iclamp(b15, min, max), ft_iclamp(c16, min, max), ft_iclamp(d_1000, min, max), \
		ft_iclamp(e_12841, min, max));
*/

	return (0);
}

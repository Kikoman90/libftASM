/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsidler <fsidler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 15:53:46 by fsidler           #+#    #+#             */
/*   Updated: 2019/09/24 17:19:58 by fsidler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libfts.h"

#include <fcntl.h>
#include <unistd.h>

int		main(void)
{
	printf("ft_itoa(32) = '%s'\n", ft_itoa(32));
	printf("ft_itoa(-32) = '%s'\n", ft_itoa(-32));
	printf("ft_itoa(0) = '%s'\n", ft_itoa(0));
	printf("ft_itoa(-0) = '%s'\n", ft_itoa(-0));
	printf("ft_itoa(-3287) = '%s'\n", ft_itoa(-3287));
	printf("ft_itoa(INT32_MAX) = '%s'\n", ft_itoa(INT32_MAX));
	printf("ft_itoa(INT32_MIN) = '%s'\n", ft_itoa(INT32_MIN));
	
	return (0);
}

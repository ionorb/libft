/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   .ft_memcmp_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yridgway <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 16:05:39 by yridgway          #+#    #+#             */
/*   Updated: 2022/05/12 16:18:02 by yridgway         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n);

int	main(int ac, char **av)
{
	(void)ac;
	if (ac == 3)
		printf("ft_memcmp:\t%d\nmemcmp:\t\t%d\n", ft_memcmp(av[1], av[2], atoi(av[3])), memcmp(av[1], av[2], atoi(av[3])));
	else
		printf("ft_memcmp:\t%d\nmemcmp:\t\t%d\n", ft_memcmp("t\200", "t\0", 2), memcmp("t\200", "t\0", 2));
	return (0);
}

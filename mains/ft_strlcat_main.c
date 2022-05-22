/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   .ft_strlcat_main.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yridgway <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 15:16:25 by yridgway          #+#    #+#             */
/*   Updated: 2022/05/11 17:21:55 by yridgway         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size);

int	main(int ac, char **av)
{
	char	*dst;

	(void)ac;
	dst = malloc(50 * sizeof (char));
	dst = av[1];
	printf("size:\t%ld\ncat:\t%s\nboop:\t\200\n", ft_strlcat(dst, av[2], atoi(av[3])), dst);
	return (0);
}

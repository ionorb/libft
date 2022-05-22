/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   .ft_strncmp_main.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yridgway <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 20:10:31 by yridgway          #+#    #+#             */
/*   Updated: 2022/05/09 20:24:28 by yridgway         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

int ft_strncmp(const char *s1, const char *s2, size_t n);

int	main(int ac, char **av)
{
	(void)ac;
	printf("strncmp:\t[%d]\nft_strncmp:\t[%d]", strncmp(av[1], av[2], atoi(av[3])), ft_strncmp(av[1], av[2], atoi(av[3])));
	return (0);
}


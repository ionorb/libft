/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   .ft_atoi_main.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yridgway <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 11:31:18 by yridgway          #+#    #+#             */
/*   Updated: 2022/05/10 14:01:44 by yridgway         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

int ft_atoi(const char *nptr);

int	main(int ac, char **av)
{
	(void)ac;
	printf("atoi:\t\t%d\nft_atoi:\t%d\n", atoi(av[1]), ft_atoi(av[1]));
	return (0);
}

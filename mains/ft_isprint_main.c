/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   .ft_isprint_main.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yridgway <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 16:00:40 by yridgway          #+#    #+#             */
/*   Updated: 2022/05/05 16:02:41 by yridgway         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <ctype.h>

int ft_isprint(int c);

int	main(int ac, char **av)
{
	(void)ac;
	printf("isprint: %d\nft_isprint: %d", isprint(av[1][0]), ft_isprint(av[1][0]));
	return (0);
}


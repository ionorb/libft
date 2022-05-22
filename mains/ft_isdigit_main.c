/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   .ft_isdigit_main.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yridgway <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 15:27:03 by yridgway          #+#    #+#             */
/*   Updated: 2022/05/05 15:31:04 by yridgway         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <ctype.h>

int ft_isdigit(int c);

int	main(int ac, char **av)
{
	(void)ac;
	printf("isdigit: %d\nft_isdigit: %d", isdigit(av[1][0]), ft_isdigit(av[1][0]));
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   .ft_isalnum_main.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yridgway <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 15:33:31 by yridgway          #+#    #+#             */
/*   Updated: 2022/05/05 15:50:10 by yridgway         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <ctype.h>
#include <stdio.h>

int ft_isalnum(int c);

int	main(int ac, char **av)
{
	(void)ac;
	printf("isalnum: %d\nft_isalnum: %d", isalnum(av[1][0]), ft_isalnum(av[1][0]));
	return (0);
}

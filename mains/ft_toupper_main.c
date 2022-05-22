/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   .ft_toupper_main.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yridgway <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 17:44:19 by yridgway          #+#    #+#             */
/*   Updated: 2022/05/09 18:03:59 by yridgway         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_toupper(int c);
int	ft_tolower(int c);

int	main(int ac, char **av)
{
	(void)ac;
	printf("ft_toupper: %d\ntoupper: %d\n", ft_toupper(av[1][0]), toupper(av[1][0]));
	printf("ft_tolower: %d\ntolower: %d\n", ft_tolower(av[1][0]), tolower(av[1][0]));
	return (0);
}

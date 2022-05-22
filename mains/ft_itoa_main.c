/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   .ft_itoa_main.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yridgway <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 19:27:44 by yridgway          #+#    #+#             */
/*   Updated: 2022/05/10 20:02:25 by yridgway         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

char	*ft_itoa(int n);

int	main(int ac, char **av)
{
	(void)ac;
	printf("ft_itoa: %s\n", ft_itoa(atoi(av[1])));
	return (0);
}

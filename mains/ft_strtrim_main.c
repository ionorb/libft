/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   .ft_strtrim_main.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yridgway <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 16:26:32 by yridgway          #+#    #+#             */
/*   Updated: 2022/05/10 16:33:32 by yridgway         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set);

int	main(int ac, char **av)
{
	(void)ac;
	printf("trimed: %s\n", ft_strtrim(av[1], av[2]));
	return (0);
}

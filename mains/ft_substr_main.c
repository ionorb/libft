/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   .ft_substr_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yridgway <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 15:40:54 by yridgway          #+#    #+#             */
/*   Updated: 2022/05/10 15:45:00 by yridgway         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

char *ft_substr(char const *s, unsigned int start, size_t len);

int	main(int ac, char **av)
{
	(void)ac;
	printf("substring: %s\n", ft_substr(av[1], atoi(av[2]), atoi(av[3])));
	return (0);
}

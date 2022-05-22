/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   .ft_putchar_main.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yridgway <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 22:44:01 by yridgway          #+#    #+#             */
/*   Updated: 2022/05/10 23:11:02 by yridgway         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>
#include <fcntl.h>

void	ft_putchar_fd(char c, int fd);


int	main(int ac, char **av)
{
	int	fd = open("file.txt", O_RDWR);

	(void)ac;
	ft_putchar_fd(av[1][0], fd);
	close(fd);
	return (0);
}

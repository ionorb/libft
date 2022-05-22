/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yridgway <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 16:50:22 by yridgway          #+#    #+#             */
/*   Updated: 2022/05/14 11:49:14 by yridgway         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_len(char const *s, char c)
{
	int	k;
	int	len;

	k = 0;
	len = 0;
	while (s[k] && s[k] != c)
	{
		len++;
		k++;
	}
	return (len);
}

char	**ft_makearr(char const *s, char c)
{
	char	**arr;
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	arr = malloc((count + 1) * sizeof (char *));
	if (!arr)
		return (NULL);
	return (arr);
}

char	*ft_putword(char const *s, char c)
{
	char	*word;
	int		k;

	k = 0;
	word = malloc((ft_len(s, c) + 1) * sizeof (char));
	if (!word)
		return (NULL);
	while (s[k] && s[k] != c)
	{
		word[k] = s[k];
		k++;
	}
	word[k] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		k;
	char	**arr;

	arr = ft_makearr(s, c);
	if (!arr)
		return (NULL);
	i = 0;
	k = 0;
	while (s[k])
	{
		while (s[k] && s[k] == c)
			k++;
		if (s[k])
		{
			arr[i] = ft_putword((s + k), c);
			i++;
		}
		while (s[k] && s[k] != c)
			k++;
	}
	arr[i] = 0;
	return (arr);
}

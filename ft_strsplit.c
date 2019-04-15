/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wvenita <wvenita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 19:18:30 by wvenita           #+#    #+#             */
/*   Updated: 2019/04/14 23:57:46 by wvenita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strword(char const *s, char c)
{
	int		i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	return (i);
}

static int	ft_wordcount(char const *s, char c)
{
	int		i;

	i = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			i++;
			while (*s != c && *s)
				s++;
		}
	}
	return (i);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**mas;
	int		i;
	int		j;

	j = -1;
	if (!(mas = (char**)malloc(sizeof(char*) * (ft_wordcount(s, c) + 1))))
		return (NULL);
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			i = 0;
			if (!(mas[++j] = ft_strnew(ft_strword(&(*s), c))))
				return (NULL);
			while (*s != c && *s)
				mas[j][i++] = *s++;
		}
	}
	mas[++j] = NULL;
	return (mas);
}
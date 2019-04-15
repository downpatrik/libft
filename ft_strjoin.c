/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wvenita <wvenita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 19:00:41 by wvenita           #+#    #+#             */
/*   Updated: 2019/04/15 00:17:14 by wvenita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*arr;
	int		i;
	int		j;
	int		size;

	size = ft_strlen((char*)s1) + ft_strlen((char*)s2);
	if (!(arr = ft_strnew(size)))
		return (NULL);
	i = -1;
	while (s1[++i])
		arr[i] = s1[i];
	j = -1;
	while (s2[++j])
		arr[i + j] = s2[j];
	arr[i + j] = '\0';
	return (arr);
}

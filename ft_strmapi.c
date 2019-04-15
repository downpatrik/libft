/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wvenita <wvenita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 16:55:54 by wvenita           #+#    #+#             */
/*   Updated: 2019/04/14 22:03:47 by wvenita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(t_u32 j, char))
{
	char	*arr;
	t_u32	i;

	if (!s || !f || !(arr = ft_strnew(ft_strlen((char*)s))))
		return (NULL);
	i = 0;
	while (s[i])
	{
		arr[i] = (*f)(i, s[i]);
		i++;
	}
	return (arr);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wvenita <wvenita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 21:53:27 by wvenita           #+#    #+#             */
/*   Updated: 2019/04/15 23:38:43 by wvenita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	int		i;
	int		n;

	i = -1;
	n = ft_strlen(dest);
	while (src[++i])
		dest[n + i] = src[i];
	dest[n + i] = '\0';
	return (dest);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wvenita <wvenita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 17:00:17 by wvenita           #+#    #+#             */
/*   Updated: 2019/04/15 00:05:48 by wvenita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	if (!s1)
		return (!s2);
	if (!s2)
		return (0);
	return (ft_strcmp((char*)s1, (char*)s2) == 0);
}

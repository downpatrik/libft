/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wvenita <wvenita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 22:14:28 by wvenita           #+#    #+#             */
/*   Updated: 2019/04/14 20:20:50 by wvenita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(char *s1, char *s2, size_t n)
{
	while ((*s1 == *s2) && *s1 && n)
	{
		s1++;
		s2++;
		n--;
	}
	return (n == 0 ? 0 : (*(t_u8*)s1 - *(t_u8*)s2));
}
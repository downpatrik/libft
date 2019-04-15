/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wvenita <wvenita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 22:18:15 by wvenita           #+#    #+#             */
/*   Updated: 2019/04/15 23:53:18 by wvenita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

double	ft_atof(const char *str)
{
	double	res1;
	double	res2;
	int		minus;
	int		i;

	res1 = 0.0;
	res2 = 0.0;
	minus = 1;
	i = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '-' || *str == '+')
		minus = 45 % *str++ - 1;
	while (ft_isdigit(*str))
		res1 = res1 * 10 + *str++ - '0';
	if (*str++ == '.')
		while (ft_isdigit(*str))
			res2 = res2 + (*str++ - '0') / ft_pow(10, i++);
	return (minus * (res1 + res2));
}

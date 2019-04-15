/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wvenita <wvenita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 21:04:39 by wvenita           #+#    #+#             */
/*   Updated: 2019/04/08 21:05:39 by wvenita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	tmp;

	tmp = n;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		tmp = -tmp;
	}
	if (tmp >= 10)
		ft_putnbr_fd(tmp / 10, fd);
	ft_putchar_fd(tmp % 10 + 48, fd);
}

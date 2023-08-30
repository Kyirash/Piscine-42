/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesneux <abesneux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 23:58:22 by abesneux          #+#    #+#             */
/*   Updated: 2023/08/30 23:58:23 by abesneux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft.h"

void	ft_putnbr(int nb)
{
	char	c;
	int		tmp;

	tmp = nb;
	if (tmp == -2147483648)
	{
		write (1, "-2147483648", 11);
		return ;
	}
	if (tmp < 0)
	{
		tmp = -nb;
		write(1, "-", 1);
	}
	if (tmp >= 10)
	{
		ft_putnbr(tmp / 10);
	}
	c = (tmp % 10) + '0';
	write (1, &c, 1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesneux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 16:07:14 by abesneux          #+#    #+#             */
/*   Updated: 2023/08/23 16:21:26 by abesneux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putstr(char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		write (1, &src[i], 1);
		i++;
	}
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int i)
{
	char	c;

	if (i == -2147483648)
	{
		write (1, "-2147483648", 1);
	}
	if (i < 0)
	{
		i = -i;
		write(1, "-", 1);
	}
	if (i >= 10)
		ft_putnbr (i / 10);
	c = (i % 10) + '0';
	write (1, &c, 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str[0] != '0' && par[i].str[1] != '\0')
	{
		ft_putstr (par[i].str);
		write(1, "\n", 1);
		ft_putnbr (par[i].size);
		write(1, "\n", 1);
		ft_putstr (par[i].copy);
		i++;
	}
}

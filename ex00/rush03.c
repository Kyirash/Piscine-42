/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesneux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 13:06:10 by abesneux          #+#    #+#             */
/*   Updated: 2023/08/13 16:01:58 by abesneux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c);

void	ecrire_ligne(int x, int y, int i, int j)
{
	if (i == 0 || i == x - 1)
	{
		if (j == 0 || j == y - 1)
		{
			if ((x == 1 && y == 1) || (i == 0 && j == 0))
				ft_putchar('A');
			else if ((j == 0 && i == x - 1))
				ft_putchar('C');
			else if ((j == 0 && i == 0) || (j == y - 1 && i == 0)) 
				ft_putchar('A'); 
			else 
				ft_putchar('C');
		}
		else
			ft_putchar('B'); 
	}
	else
	{
		if (j == 0 || j == y - 1)
			ft_putchar('B');
		else
			ft_putchar(' ');
	}
}

void	rush03(int x, int y)
{
	int	j;
	int	i;

	j = 0;
	while (j < y)
	{
		i = 0;
		while (i < x)
		{
			ecrire_ligne(x, y, i, j);
			i++;
		}
		if (x > 0)
			ft_putchar('\n');
		j++;
	}
}

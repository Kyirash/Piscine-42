/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesneux <abesneux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 23:58:30 by abesneux          #+#    #+#             */
/*   Updated: 2023/08/30 23:58:31 by abesneux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft.h"
#include <stdio.h>

int	check_zero(char **av, int b)
{
	if (ft_strcmp(av[2], "/") == 0 && b == 0)
	{
		write (1, "Stop : division by zero\n", 24);
		return (0);
	}
	if (ft_strcmp(av[2], "%") == 0 && b == 0)
	{
		write (1, "Stop : modulo by zero\n", 22);
		return (0);
	}
	return (1);
}

int	calcul(int a, int b, char **av)
{
	int	res;

	if (check_zero(av, b) == 0)
	{
		return (-1);
	}
	if (ft_strcmp(av[2], "+") == 0)
		res = plus (a, b);
	else if (ft_strcmp(av[2], "-") == 0)
		res = minus (a, b);
	else if (ft_strcmp(av[2], "*") == 0)
	{
		res = multiply (a, b);
	}
	else if (ft_strcmp(av[2], "/") == 0)
		res = divide (a, b);
	else if (ft_strcmp(av[2], "%") == 0)
		res = modulo (a, b);
	else
		res = 0;
	return (res);
}

int	main(int ac, char **av)
{
	int	a;
	int	b;

	if (ac != 4)
		return (-1);
	a = ft_atoi(av[1]);
	b = ft_atoi(av[3]);
	if (calcul(a, b, av) == -1)
		return (-1);
	ft_putnbr ((calcul(a, b, av)));
	write (1, "\n", 1);
	return (0);
}

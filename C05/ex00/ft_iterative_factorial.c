/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesneux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 22:28:40 by abesneux          #+#    #+#             */
/*   Updated: 2023/08/20 22:36:12 by abesneux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	res;
	int	i;

	res = 1;
	i = 1;
	if (nb < 0 || nb > 12)
		return (0);
	while (i <= nb)
	{
		res *= i;
		i++;
	}
	return (res);
}
/*
int	main(void)
{
	printf("%d", ft_iterative_factorial(10));
	return (0);
}*/

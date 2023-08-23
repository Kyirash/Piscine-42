/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesneux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 21:25:02 by abesneux          #+#    #+#             */
/*   Updated: 2023/08/10 22:16:21 by abesneux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}
/*
int	main()
{
	int a;
	int b;
	int div;
	int mod;

	a = 10;
	b = 5;

	ft_div_mod(a, b, &div, &mod);
	printf("%d \n", div);
	printf("%d", mod);
}*/

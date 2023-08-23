/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesneux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 20:46:28 by abesneux          #+#    #+#             */
/*   Updated: 2023/08/10 20:59:02 by abesneux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
/*
int	main()
{
	int	a;
	int	b;

	a = 5;
	b = 6;

	ft_swap(&a, &b);
	write(1, "a =", 3); 
	printf("%d \n", a);
	write(1, "b =", 3);
	printf("%d", b);
}*/

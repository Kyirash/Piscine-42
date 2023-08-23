/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesneux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 18:05:17 by abesneux          #+#    #+#             */
/*   Updated: 2023/08/12 20:39:23 by abesneux         ###   ########.fr       */
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

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;

	while (size >= 0)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				ft_swap (&tab[i], &tab[i + 1]);
			}
			i ++;
		}
		size--;
	}
}
/*
int	main()
{
	int	tab[5] = {7, 6, 3, 2, 5};
	int size;
	int i;

	size = 5;
	ft_sort_int_tab(tab, size);

	i = 0;

	while(i <= size - 1)
	{
		printf("%d", tab[i]);
		i++;
	}
	return (0);
}*/

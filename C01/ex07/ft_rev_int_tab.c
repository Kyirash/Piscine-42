/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesneux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 12:48:17 by abesneux          #+#    #+#             */
/*   Updated: 2023/08/12 19:34:03 by abesneux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_swap (int *int1, int *int2)
{
	int	tmp;
	
	tmp = *int1;
	*int1 = *int2;
	*int2 = tmp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < (size / 2))
	{
		ft_swap (&tab[i], &tab[size - 1 - i]);
		i++;
	}
}

int	main()
{
	int tab[6]  = {0, 1, 2, 3, 4, 5};
	int size;
	int i;

	size = 6;
	ft_rev_int_tab(tab, size);
	i = 0;
	while(i <= 5)
	{
		printf("%d", tab[i]);
		i++;
	}
	write(1, "\n", 1);
	return(0);
}

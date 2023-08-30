/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesneux <abesneux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 18:20:59 by abesneux          #+#    #+#             */
/*   Updated: 2023/08/30 18:22:11 by abesneux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int	*tab, int length, int (*f)(int, int))
{
	int	i;
	int	croissant;
	int	decroissant;

	i = 1;
	croissant = 1;
	decroissant = 1;
	if (length <= 1)
		return (1);
	while (i < length)
	{
		if (f(tab[i - 1], tab[i] < 0))
			decroissant = 0;
		i++;
	}
	i = 1;
	while (i < length)
	{
		if (f(tab[i - 1], tab[i] > 0))
			croissant = 0;
		i++;
	}
	if (croissant || decroissant)
		return (1);
	return (0);
}

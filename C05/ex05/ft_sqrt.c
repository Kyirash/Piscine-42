/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesneux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 23:34:58 by abesneux          #+#    #+#             */
/*   Updated: 2023/08/21 00:50:23 by abesneux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb == 2147395600)
		return (46340);
	if (nb > 2147395600)
		return (0);
	while (i * i < nb)
		i ++;
	if (i * i == nb)
		return (i);
	else
		return (0);
}
/*
int	main(void)
{
	printf("%d", ft_sqrt(25));
	return (0);
}*/

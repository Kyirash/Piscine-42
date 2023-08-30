/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesneux <abesneux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 23:58:28 by abesneux          #+#    #+#             */
/*   Updated: 2023/08/30 23:58:28 by abesneux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft.h"
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	neg;
	int	nb;

	nb = 0;
	i = 0;
	neg = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = (nb * 10) + (str[i] - '0');
		i++;
	}
	return (neg * nb);
}

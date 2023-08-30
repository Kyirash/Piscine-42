/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesneux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 01:13:38 by abesneux          #+#    #+#             */
/*   Updated: 2023/08/30 18:05:11 by abesneux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char *))
{
	int	i;
	int	cpt;

	i = 0;
	cpt = 0;
	while (i < length)
	{
		if (f(tab[i]) != 0)
			cpt ++;
		i++;
	}
	return (cpt);
}

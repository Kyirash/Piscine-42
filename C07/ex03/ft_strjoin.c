/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesneux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 19:14:13 by abesneux          #+#    #+#             */
/*   Updated: 2023/08/20 20:15:38 by abesneux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		i++;
	}
	return (i);
}

int	get_final_size(int size, char **strs, char *sep)
{
	int	i;
	int	res;

	if (size == 0)
		return (1);
	i = 0;
	res = 0;
	while (i < size)
		res += ft_strlen(strs[i++]);
	res += ft_strlen(sep) * (size - 1);
	return (res + 1);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*tab;

	tab = (char *)malloc(get_final_size(size, strs, sep));
	if (!tab)
		return (NULL);
	tab[0] = '\0';
	if (size == 0)
		return (tab);
	i = 0;
	while (i < size)
	{
		ft_strcat(tab, strs[i]);
		i++;
		if (i != size)
			ft_strcat(tab, sep);
	}
	return (tab);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*strs[] = { "Adrien", "Besneux", "19 ans" };
	char	sep[] = "//";
	int	taillestrs;
	
	taillestrs = 3;
	printf ("%s\n", ft_strjoin(taillestrs, strs, sep));
	return (0);
}*/

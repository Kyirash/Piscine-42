/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesneux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 13:31:31 by abesneux          #+#    #+#             */
/*   Updated: 2023/08/15 15:06:31 by abesneux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j] && j < nb)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	src[] = "Demir";
	char	src1[] = "Demir";
	char	dest[20] = "Ozan";
	char	dest1[20] = "Ozan";
	

	printf("a toi   = %s\n", ft_strncat(dest, src, 2));
	printf("strncat = %s\n", strncat(dest1, src1, 2));
	
	return (0);
}*/

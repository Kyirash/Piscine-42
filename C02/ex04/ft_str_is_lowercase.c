/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesneux <abesneux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 16:09:16 by abesneux          #+#    #+#             */
/*   Updated: 2023/08/14 17:09:27 by abesneux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			i++;
		}
		else 
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	char	str[] = "abcdfte";
	char	str2[] = "GHDGHDGHDGHDGHD";
	
	printf("%d", ft_str_is_lowercase(str));
	printf("%d", ft_str_is_lowercase(str2));
}*/

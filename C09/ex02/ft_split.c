/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesneux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 18:23:28 by abesneux          #+#    #+#             */
/*   Updated: 2023/08/28 02:26:54 by abesneux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check_sep(char c, char *sep_list)
{
	int	i;

	i = 0;
	while (sep_list[i])
	{
		if (c == sep_list[i])
			return (1);
		i++;
	}
	return (0);
}

char	*get_next_word(int *index, char *str, char *charset)
{
	int		i;
	char	*res;
	int		len;

	i = 0;
	while (check_sep(str[*index], charset))
		(*index)++;
	while (!check_sep(str[*index + len], charset) && str[*index + len])
		len++;
	res = malloc ((len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	while (i < len)
	{
		res[i] = str[*index];
		(*index)++;
		i++;
	}
	res[i] = '\0';
	return (res);
}

char	**ft_split(char *str, char *charset)
{
	char	**res;
	int		len_total;
	int		i;
	int		j;

	i = 0;
	j = 0;
	len_total = ft_strlen(str) + ft_strlen(charset) + 1;
	res = malloc(len_total * sizeof(char *));
	if (!res)
		return (NULL);
	while (i < len_total - 1)
	{
		res[i] = get_next_word(&j, str, charset);
		i++;
	}
	res[i] = '\0';
	return (res);
}
/*
int	main(void)
{
	char	*charset = "-/?";
	char	*str = "Salut?Je-Suis/Adrien";
	int	i;
	int	j;
	char	**tab;

	tab = ft_split(str, charset);
	i = 0;
	while (tab[i])
	{
		j = 0;
		while (tab[i][j])
		{
			printf("%s\n", &tab[i][j]);
			j++;
		}
		i++;
	}
	return (0);
}*/
int	main(int argc, char **argv)
{
	int		index;
	char	**split;
	(void)	argc;
	split = ft_split(argv[1], argv[2]);
	index = 0;
	while (split[index])
	{
		printf("%s\n", split[index]);
		index++;
	}
}

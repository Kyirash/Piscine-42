/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesneux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 20:55:13 by abesneux          #+#    #+#             */
/*   Updated: 2023/08/28 21:56:34 by abesneux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	is_a_sep(char c, char *sep)
{
	while (*sep)
	{
		if (*sep == c)
			return (1);
		sep++;
	}
	return (0);
}

int	ft_strlen_to_sep(char *str, char *sep)
{
	int	i;

	i = 0;
	while (str[i] && is_a_sep(str[i], sep) == 0)
		i++;
	return (i);
}

int	countwords(char *str, char *sep)
{
	int	count;

	count = 0;
	while (*str)
	{
		if (is_a_sep(*str, sep) == 0 && (is_a_sep(*(str + 1), sep) == 1
				|| *(str + 1) == '\0'))
			count ++;
		str++;
	}
	return (count);
}

char	*ft_word(char *str, char *charset)
{
	char	*tab;
	int		wlen;
	int		i;

	wlen = ft_strlen_to_sep(str, charset);
	tab = (char *)malloc(sizeof(char) * (wlen + 1));
	i = 0;
	while (i < wlen)
	{
		tab[i] = str[i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		i;

	i = 0;
	tab = (char **)malloc(sizeof(char *) *(countwords(str, charset) + 1));
	if (tab == 0)
		return (NULL);
	while (*str)
	{
		while (*str != '\0' && is_a_sep(*str, charset))
			str++;
		if (*str != '\0')
		{
			tab[i] = ft_word(str, charset);
			i++;
		}
		while (*str != '\0' && !is_a_sep(*str, charset))
			str++;
	}
	tab[i] = 0;
	return (tab);
}

#include <stdio.h>

int main()
{
    char str[] = "Hello,World;This|is: a!test";
    char sep[] = ",;|:!";

    char **result = ft_split(str, sep);

    if (result)
    {
        int i = 0;
        while (result[i] != NULL)
        {
            printf("Word %d: %s\n", i, result[i]);
            i++;
        }

        // Free allocated memory for the array of words
        i = 0;
        while (result[i] != NULL)
        {
            free(result[i]);
            i++;
        }
        free(result);
    }
    else
    {
        printf("Memory allocation failed.\n");
    }

    return 0;
}

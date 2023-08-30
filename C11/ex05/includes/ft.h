/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesneux <abesneux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 00:00:57 by abesneux          #+#    #+#             */
/*   Updated: 2023/08/31 00:00:58 by abesneux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# include <unistd.h>

int		plus(int a, int b);
int		minus(int a, int b);
int		multiply(int a, int b);
int		divide(int a, int b);
int		modulo(int a, int b);
int		ft_atoi(char *str);
int		ft_strcmp(char *s1, char *s2);
void	ft_putnbr(int nb);

#endif

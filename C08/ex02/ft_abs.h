/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesneux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 22:38:50 by abesneux          #+#    #+#             */
/*   Updated: 2023/08/22 23:52:57 by abesneux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H
# define FT_ABS_H

# define ABS(value) (((value > 0)* 2 - 1)*value) 
#endif

/* *2 - 1 car quand > 0 ca donne 1 et < 0 ca donne -1 
donc gestion de la valeur absolue car on multiplie valeur 
par 1 ou -1 hehehehe */

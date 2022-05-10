/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nero <nero@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 16:52:30 by nero              #+#    #+#             */
/*   Updated: 2022/04/26 16:58:10 by nero             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
    long    i;
    long    nbr;
    int sign;

    i = 0;
    nbr = 0;
    sign = 0;
    while (str[i] != '\0' && (str[i] == 32 || str[i] == '\t' || str[i] == '\n'
			|| str[i] == '\r' || str[i] == '\v' || str[i] == '\f'))
		i++;
	if (str[i] != '\0' && str[i] == '-')
    {
        sign = 1;
        i++;
    }
    else if (str[i] != '\0' && ft_isdigit(str[i]))
        nbr = (nbr * 10) + (str[i++] - '0');
    if (sign == 1)
        return (-nbr);
    else
        return (nbr);
}

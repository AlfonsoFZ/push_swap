/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_long_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfofern <alfofern@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 13:35:44 by alfofern          #+#    #+#             */
/*   Updated: 2023/04/03 13:39:54 by alfofern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_long_atoi(const char *str)
{	
	long	i;
	long	num;
	long	sign;

	i = 0;
	num = 0;
	sign = 1;
	while ((str[i] == ' ') || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while ((str[i] >= '0' && str[i] <= '9'))
	{
		num = (str[i] - '0' + num * 10);
		i++;
	}
	if ((num * sign) > 2147483647 || num * sign < -2147483648)
		exit_error(4);
	return ((int)(num * sign));
}

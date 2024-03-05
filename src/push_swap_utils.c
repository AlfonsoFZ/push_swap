/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfofern <alfofern@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 11:30:28 by alfofern          #+#    #+#             */
/*   Updated: 2023/05/03 10:50:46 by alfofern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	size_array(char **array)
{
	int	i;

	i = 0;
	while (array[i])
		i++;
	return (i);
}

int	ft_strcmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] == s2[i])
			i++;
		else
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	}	
	return (0);
}

void	ft_indexforint(t_num *dt)
{
	int	j;
	int	i;

	j = 0;
	i = 0;
	while (j < dt->sizea)
	{
		if (dt->a[j] != dt->t[i])
			i++;
		else
		{
			dt->a[j] = i;
			j++;
			i = 0;
		}
	}
}

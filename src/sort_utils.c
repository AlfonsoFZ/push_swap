/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfofern <alfofern@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 11:13:09 by alfofern          #+#    #+#             */
/*   Updated: 2023/05/03 10:51:23 by alfofern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_checkifsorted(int *array, int size)
{
	int	i;

	i = 0;
	while (i < size -1)
	{
		if (array[i] > array[i + 1])
			return (1);
		i++;
	}
	return (0);
}

int	ft_indexorder(int *array, int size)
{
	int	i;

	i = 0;
	while (i < size -1)
	{
		if (array[i] != array[i + 1] - 1)
			return (1);
		i++;
	}
	return (0);
}

int	find_place(t_num *dt)
{
	int	i;

	i = 0;
	while (i <= dt->sizeb - 1)
	{
		if (dt->b[i] == dt->sizet)
			break ;
		i++;
	}
	if ((dt->sizet / 2) - i >= 0)
		return (0);
	else
		return (-1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfofern <alfofern@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 11:43:56 by alfofern          #+#    #+#             */
/*   Updated: 2023/05/03 10:50:57 by alfofern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	qs(int array[], int limit_l, int limit_r)
{
	int	var[4];

	var[0] = limit_l;
	var[1] = limit_r;
	var[2] = array[(var[0] + var[1]) / 2];
	while (var[0] <= var[1])
	{
		while (array[var[0]] < var[2] && var[0] < limit_r)
			var[0]++;
		while (var[2] < array[var[1]] && var[1] > limit_l)
			var[1]--;
		if (var[0] <= var[1])
		{
			var[3] = array[var[0]];
			array[var[0]] = array[var[1]];
			array[var[1]] = var[3];
			var[0]++;
			var[1]--;
		}
	}
	if (limit_l < var[1])
		qs(array, limit_l, var[1]);
	if (limit_r > var[0])
		qs(array, var[0], limit_r);
}

void	quicksort(int array[], int n)
{
	qs(array, 0, n - 1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfofern <alfofern@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 08:57:18 by alfofern          #+#    #+#             */
/*   Updated: 2023/04/26 20:27:10 by alfofern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_small_b(t_num *dt)
{
	while (dt->sizeb > 0)
	{
		if (dt->b[0] == dt->sizet)
		{
			pa(dt);
			dt->sizet--;
		}
		else
			rb(dt);
	}
}

static void	pre_sort_b(t_num *dt)
{
	if (dt->b[0] < dt->b[1])
	{
		if (dt->b[1] > dt->b[dt->sizeb -1])
			rb(dt);
		else
			sb(dt);
	}
	else if (dt->b[0] < dt->b[dt->sizeb -1] - 1)
		rrb(dt);
	else if (dt->b[0] > dt->b[dt->sizeb -1])
		rb(dt);
}

void	ft_sort_small(t_num *dt)
{
	int	j;

	j = dt->argc - 3;
	while (dt->sizea > 3 && ft_indexorder(dt->a, dt->sizea))
	{
		if (dt->a[dt->sizea -1] == 0)
			rra(dt);
		else if (dt->a[0] < j)
		{
			pb(dt);
			pre_sort_b(dt);
		}
		else if (dt->a[0] >= j && dt->a[1] >= j && dt->a[dt->sizea -1] < j)
			rra(dt);
		else
			ra(dt);
	}
	if (dt->sizea == 3 && ft_indexorder(dt->a, dt->sizea))
	{
		s_trhee(dt);
		dt->sizet = dt->sizet - 3;
	}
	else
		dt->sizet = dt->a[0] - 1;
	ft_sort_small_b(dt);
}

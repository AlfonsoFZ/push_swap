/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfofern <alfofern@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 08:57:07 by alfofern          #+#    #+#             */
/*   Updated: 2023/05/03 10:51:09 by alfofern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_eval_first(t_num *dt)
{
	pa(dt);
	dt->sizet--;
	if (dt->a[0] - 1 == dt->a[1] && dt->a[dt->sizea - 1] - dt->a[0] > 2)
	{	
		sa(dt);
		dt->sizet--;
	}
	else if (dt->a[0] - 1 == dt->a[1] && dt->a[dt->sizea -1] - dt->a[0] == -2)
	{	
		sa(dt);
		rra(dt);
		dt->sizet = dt->sizet - 2;
	}
	else if (dt->a[dt->sizea - 2] - dt->a[dt->sizea - 3] != 1)
	{
		rra(dt);
		rra(dt);
		dt->sizet = dt->sizet - 2;
	}
	else if (dt->a[0] - dt->a[dt->sizea - 1] == 2)
		rra(dt);
}

static void	ft_sort_data_b(t_num *dt)
{
	while (dt->sizeb > 0)
	{
		if (dt->b[dt->sizet] == dt->sizet && dt->sizeb > 2)
			rrb(dt);
		else if (dt->b[0] == dt->sizet)
			ft_eval_first(dt);
		else if (dt->b[0] == dt->sizet - 1)
			pa(dt);
		else if (find_place(dt) == -1)
			rrb(dt);
		else
			rb(dt);
	}
}

static void	pre_sort_b(t_num *dt)
{
	if (dt->argc < 30)
	{
		if (dt->a[dt->sizea - 1] < dt->nums && dt->sizea > 3)
			rra(dt);
	}
	if (dt->a[0] < dt->nums)
	{
		pb(dt);
		if (dt->b[0] == dt->b[1] - 1)
			sb(dt);
		else if (dt->b[0] > dt->nums - dt->subdivm && dt->sizeb > 1)
			rb(dt);
	}
	else
		ra(dt);
}

void	ft_sort_data(t_num *dt)
{
	dt->nums = (dt->argc / dt->div) * dt->mult;
	if (dt->mult == dt->div)
		dt->nums = dt->nummax -3;
	while ((dt->sizeb < dt->nums && dt->mult <= dt->div))
		pre_sort_b(dt);
	dt->mult++;
	if (dt->sizea == 3)
	{
		s_trhee(dt);
		dt->sizet = dt->sizet - 3;
	}
	if (dt-> mult <= dt->div)
		ft_sort_data(dt);
	ft_sort_data_b(dt);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfofern <alfofern@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 11:15:54 by alfofern          #+#    #+#             */
/*   Updated: 2023/05/03 10:43:10 by alfofern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	s_five(int *a, t_num *dt)
{
	if (dt->sizea == 5 && ft_checkifsorted(a, dt->sizea) == 1)
	{
		if (a[1] == 0)
			sa(dt);
		else if (a[2] == 0)
		{
			ra(dt);
			sa(dt);
		}
		else if (a[3] == 0)
		{
			rra(dt);
			rra(dt);
		}
		else if (a[4] == 0)
			rra(dt);
	}
	if (ft_checkifsorted(dt->a, dt->sizea) == 1)
		pb(dt);
	if (dt->sizea == 4)
		s_four(dt->a, dt);
	pa (dt);
}

void	s_four(int *a, t_num *dt)
{
	if (dt->sizea == 4 && ft_checkifsorted(a, dt->sizea) == 1)
	{
		if (a[0] > a[1] && a[1] < a[2] && a[1] < a[3])
			sa(dt);
		else if (a[0] > a[2] && a[1] > a[2] && a[2] < a[3])
		{
			ra(dt);
			sa(dt);
		}
		else if (a[0] > a[3] && a[1] > a[3] && a[2] > a[3])
			rra(dt);
	}
	if (ft_checkifsorted(dt->a, dt->sizea) == 1)
		pb(dt);
	if (dt->sizea == 3)
		s_trhee(dt);
	pa(dt);
}

void	s_trhee(t_num *dt)
{
	if (dt->sizea == 2)
	{
		if (dt->a[0] > dt->a[1])
			sa(dt);
	}
	else if (dt->a[0] > dt->a[1] && dt->a[1] > dt->a[2])
	{
		sa(dt);
		rra(dt);
	}
	else if (dt->a[0] > dt->a[1] && dt->a[0] < dt->a[2])
		sa(dt);
	else if (dt->a[0] > dt->a[1] && dt->a[1] < dt->a[2])
		ra(dt);
	else if (dt->a[0] < dt->a[1] && dt->a[0] > dt->a[2])
		rra(dt);
	else if (dt->a[0] < dt->a[1] && dt->a[1] > dt->a[2])
	{
		sa(dt);
		ra(dt);
	}
}

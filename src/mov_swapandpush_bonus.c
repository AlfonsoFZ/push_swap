/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mov_swapandpush_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfofern <alfofern@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 10:35:32 by alfofern          #+#    #+#             */
/*   Updated: 2023/05/03 10:50:02 by alfofern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_num *dt)
{
	int	temp;

	if (dt->sizea > 1)
	{
		temp = dt->a[0];
		dt->a[0] = dt->a[1];
		dt->a[1] = temp;
	}
}

void	sb(t_num *dt)
{
	int	temp;

	if (dt->sizeb > 1)
	{
		temp = dt->b[0];
		dt->b[0] = dt->b[1];
		dt->b[1] = temp;
	}
}

void	ss(t_num *dt)
{
	sa(dt);
	sb(dt);
}	

void	pa(t_num *dt)
{
	int	i;

	dt->sizea = dt->sizea + 1;
	i = dt->sizea;
	if (dt->sizeb > 0)
	{
		if (dt->sizea == 0)
			dt->a[0] = dt->b[0];
		else
		{
			while (i-- >= 0)
				dt->a[(i)] = dt->a[i - 1];
			dt->a[0] = dt->b[0];
		}
		i = 0;
		while (i <= dt->sizeb)
		{	
			dt->b[i] = dt->b[i + 1];
			i++;
		}
		dt->sizeb = dt->sizeb - 1;
	}
}

void	pb(t_num *dt)
{
	int	i;

	dt->sizeb = dt->sizeb + 1;
	i = dt->sizeb;
	if (dt->sizea > 0)
	{
		if (dt->sizeb == 0)
			dt->b[0] = dt->a[0];
		else
		{
			while (i-- > 0)
				dt->b[i] = dt->b[i - 1];
			dt->b[0] = dt->a[0];
		}
		i = 0;
		while (i < dt->sizea)
		{	
			dt->a[i] = dt->a[i + 1];
			i++;
		}
		dt->sizea = dt->sizea - 1;
	}
}

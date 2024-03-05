/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mov_revrotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfofern <alfofern@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 10:35:32 by alfofern          #+#    #+#             */
/*   Updated: 2023/05/03 10:49:24 by alfofern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_num *dt)
{
	long	i;
	int		temp;

	i = dt->sizea - 1;
	temp = dt->a[dt->sizea - 1];
	while (i > 0)
	{
		dt->a[i] = dt->a[i - 1];
		i--;
	}
	dt->a[0] = temp;
	if (dt->check == 0)
		write(1, "rra\n", 4);
}

void	rrb(t_num *dt)
{
	long	i;
	int		temp;

	i = dt->sizeb - 1;
	temp = dt->b[dt->sizeb - 1];
	while (i > 0)
	{
		dt->b[i] = dt->b[i - 1];
		i--;
	}
	dt->b[0] = temp;
	if (dt->check == 0)
		write(1, "rrb\n", 4);
}

void	rrr(t_num *dt)
{
	dt->check = 1;
	rra(dt);
	rrb(dt);
	write(1, "rrr\n", 3);
	dt->check = 0;
}

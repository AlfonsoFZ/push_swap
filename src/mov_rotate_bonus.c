/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mov_rotate_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfofern <alfofern@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 10:35:32 by alfofern          #+#    #+#             */
/*   Updated: 2023/05/03 10:49:33 by alfofern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_num *dt)
{
	long	i;
	int		temp;

	i = 0;
	temp = dt->a[0];
	while (i < dt->sizea - 1)
	{
		dt->a[i] = dt->a[i + 1];
		i++;
	}
	dt->a[dt->sizea - 1] = temp;
}

void	rb(t_num *dt)
{
	long	i;
	int		temp;

	i = 0;
	temp = dt->b[0];
	while (i < dt->sizeb - 1)
	{
		dt->b[i] = dt->b[i + 1];
		i++;
	}
	dt->b[dt->sizeb - 1] = temp;
}

void	rr(t_num *dt)
{
	ra(dt);
	rb(dt);
}

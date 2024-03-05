/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mov_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfofern <alfofern@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 10:35:32 by alfofern          #+#    #+#             */
/*   Updated: 2023/05/03 10:49:41 by alfofern         ###   ########.fr       */
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
	if (dt->check == 0)
		write(1, "ra\n", 3);
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
	if (dt->check == 0)
		write(1, "rb\n", 3);
}

void	rr(t_num *dt)
{
	dt->check = 1;
	ra(dt);
	rb(dt);
	write(1, "rr\n", 3);
	dt->check = 0;
}

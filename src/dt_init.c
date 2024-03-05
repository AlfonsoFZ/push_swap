/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dt_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfofern <alfofern@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 17:25:38 by oem               #+#    #+#             */
/*   Updated: 2023/04/28 13:22:07 by alfofern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	init_stacks(t_num *dt)
{
	dt->a = malloc(dt->sizea * sizeof(int));
	if (!dt->a)
		return (free (dt->a), 5);
	dt->b = malloc(dt->sizea * sizeof(int));
	if (!dt->b)
		return (free (dt->b), free(dt->a), 5);
	dt->t = malloc(dt->sizea * sizeof(int));
	if (!dt->b)
		return (free (dt->t), free(dt->b), free (dt->a), 5);
	return (0);
}

t_num	*initdt(t_num	*dt, int argc, char **argv)
{
	dt->a = NULL;
	dt->b = NULL;
	dt->t = NULL;
	dt->sizea = -1;
	dt->sizeb = 0;
	dt->argc = argc - 1;
	dt->argv = argv;
	dt->check = 0;
	return (dt);
}

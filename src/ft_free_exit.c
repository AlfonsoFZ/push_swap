/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_exit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfofern <alfofern@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 13:03:55 by alfofern          #+#    #+#             */
/*   Updated: 2023/05/02 18:47:55 by alfofern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free_exit(t_num *dt)
{
	if (dt->a[0])
	{
		free(dt->a);
		if (dt->b)
			free(dt->b);
		if (dt->t)
			free(dt->t);
		if (dt)
			free(dt);
	}
	exit(0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_numbers.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfofern <alfofern@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 08:46:17 by alfofern          #+#    #+#             */
/*   Updated: 2023/05/03 10:48:38 by alfofern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	s_five_hundred(t_num *dt)
{
	dt->sizet = dt->argc -1;
	dt->div = 8;
	dt->subdivm = (dt->argc / dt->div) / 2;
	dt->mult = 1;
	dt->nummax = dt->argc;
	ft_sort_data(dt);
}

void	s_hundred(t_num *dt)
{
	dt->sizet = dt->argc -1;
	dt->div = 4;
	dt->subdivm = (dt->argc / dt->div) / 2;
	dt->mult = 1;
	dt->nummax = dt->argc;
	if (dt->argc >= 20)
		ft_sort_data(dt);
	else
		ft_sort_small(dt);
}

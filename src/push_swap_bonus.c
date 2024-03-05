/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfofern <alfofern@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 11:46:06 by alfofern          #+#    #+#             */
/*   Updated: 2023/05/03 10:50:33 by alfofern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_convert_int(char **toi, t_num *dt)
{
	int	i;

	i = 0;
	while (i < dt->sizea)
	{
		dt->a[i] = ft_long_atoi(toi[i]);
		dt->t[i] = dt->a[i];
		i++;
	}
	if (dt->check == 1)
	{
		i = -1;
		while (toi[++i])
			free(toi[i]);
		free(toi);
		dt->check = 0;
	}
}

int	*ft_split_check_args(t_num *dt)
{	
	char	**toi;

	if (!dt->argv[2])
	{
		toi = ft_split(dt->argv[1], ' ');
		if (!toi[0])
			exit_error(4);
		dt->sizea = size_array(toi);
		dt->sizet = dt->sizea;
		dt->argc = dt->sizea;
		dt->check = 1;
	}
	else
	{
		toi = &(dt->argv[1]);
		dt->sizea = dt->argc;
		dt->sizet = dt->sizea;
	}
	if (init_stacks(dt))
		ft_free_exit(dt);
	ft_check_num_array(toi, dt->sizea);
	ft_convert_int(toi, dt);
	return (dt->a);
}

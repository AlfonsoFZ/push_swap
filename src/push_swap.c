/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfofern <alfofern@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 11:46:06 by alfofern          #+#    #+#             */
/*   Updated: 2023/05/03 10:48:29 by alfofern         ###   ########.fr       */
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
		dt->t[i] = ft_long_atoi(toi[i]);
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

static void	ft_range(t_num *dt)
{
	if (dt->sizea < 4)
		s_trhee(dt);
	else if (dt->sizea == 4)
		s_four(dt->a, dt);
	else if (dt->sizea == 5)
		s_five(dt->a, dt);
	else if (dt->sizea <= 100)
		s_hundred(dt);
	else
		s_five_hundred(dt);
}

int	main(int argc, char **argv)
{
	t_num	*dt;

	if (argc == 1)
		return (0);
	else
	{
		dt = (t_num *)malloc(sizeof(t_num));
		if (!dt)
			return (1);
		dt = initdt(dt, argc, argv);
		dt->a = ft_split_check_args(dt);
		isrepeated(dt->a, dt->sizea);
		if (ft_checkifsorted(dt->a, dt->sizea) == 1)
		{	
			quicksort(dt->t, dt->sizea);
			ft_indexforint(dt);
			ft_range(dt);
			ft_free_exit(dt);
		}	
		else
			ft_free_exit(dt);
	}
	return (0);
}

// 	Wherever you want:
	// void ft_leaks(void)
	// {
	//     system ("leaks -q push_swap");
	// }
// into the main:
	//    atexit(ft_leaks);

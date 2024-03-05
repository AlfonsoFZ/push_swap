/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfofern <alfofern@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 13:37:30 by alfofern          #+#    #+#             */
/*   Updated: 2023/05/02 18:52:05 by alfofern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "../libftExt/ft_printf.h"
#include "../libftExt/get_next_line_bonus.h"
#include "../libftExt/libft.h"

void	check_result(t_num *dt)
{
	int	i;

	i = 0;
	while (i < dt->sizea -1)
	{
		if (dt->a[i] == i)
			i++;
		else
		{
			ft_printf("KO\n");
			exit(EXIT_FAILURE);
		}
	}
	if (dt->sizeb == 0)
		ft_printf("OK\n");
	else
	{
		ft_printf("KO\n");
		exit(EXIT_FAILURE);
	}
}

void	do_movs(t_num *dt, char *input)
{
	dt->check = 1;
	if (ft_strncmp("sa\n", input, 3) == 0)
		sa(dt);
	else if (ft_strncmp("sb\n", input, 3) == 0)
		sb(dt);
	else if (ft_strncmp("ss\n", input, 3) == 0)
		ss(dt);
	else if (ft_strncmp("pa\n", input, 3) == 0)
		pa(dt);
	else if (ft_strncmp("pb\n", input, 3) == 0)
		pb(dt);
	else if (ft_strncmp("ra\n", input, 3) == 0)
		ra(dt);
	else if (ft_strncmp("rb\n", input, 3) == 0)
		rb(dt);
	else if (ft_strncmp("rr\n", input, 3) == 0)
		rr(dt);
	else if (ft_strncmp("rra\n", input, 4) == 0)
		rra(dt);
	else if (ft_strncmp("rrb\n", input, 4) == 0)
		rrb(dt);
	else if (ft_strncmp("rrr\n", input, 4) == 0)
		rrr(dt);
	else
		exit_error(9);
}

int	main(int argc, char**argv)
{
	t_num	*dt;
	char	*input;

	if (argc == 1)
		return (0);
	dt = (t_num *)malloc(sizeof(t_num));
	if (!dt)
		return (1);
	dt = initdt(dt, argc, argv);
	dt->a = ft_split_check_args(dt);
	isrepeated(dt->a, dt->sizea);
	quicksort(dt->t, dt->sizea);
	ft_indexforint(dt);
	dt->mult = 0;
	while (1)
	{
		input = get_next_line(0);
		if (input == 0)
			break ;
		do_movs(dt, input);
	}
	check_result(dt);
	ft_free_exit(dt);
	return (0);
}

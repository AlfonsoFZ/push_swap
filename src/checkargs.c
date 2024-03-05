/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkargs.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfofern <alfofern@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 10:27:55 by alfofern          #+#    #+#             */
/*   Updated: 2023/04/27 13:37:01 by alfofern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	exit_error(int err)
{
	write (2, "Error\n", 6);
	exit (err);
}

int	ft_check_num(char *c)
{
	size_t	i;

	i = 0;
	if (c == 0)
		return (1);
	if ((c[i] == '-' && ft_isdigit(c[i + 1]))
		|| (c[i] == '+' && ft_isdigit(c[i + 1])))
		i++;
	while (c && c[i])
	{
		if (!ft_isdigit(c[i]))
			return (1);
		else
			i++;
	}
	return (0);
}

int	isrepeated(int *a, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size -1)
	{
		j = i + 1;
		while (j < size)
		{
			if (a[i] == a[j])
			{
				free(a);
				exit_error(2);
			}
			j++;
		}	
		i++;
	}
	return (0);
}

int	isrepeated_char(char *a[])
{
	int	i;
	int	j;

	i = 0;
	while (a[i])
	{
		j = i + 1;
		while (a[j])
		{
			if (ft_strcmp(a[i], a[j]) == 0)
				exit_error(2);
			j++;
		}	
		i++;
	}
	return (0);
}

int	ft_check_num_array(char **a, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (ft_check_num(a[i]) == 0)
			i++;
		else
			exit_error(3);
	}
	return (0);
}

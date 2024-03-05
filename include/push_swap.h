/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfofern <alfofern@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 11:12:52 by alfofern          #+#    #+#             */
/*   Updated: 2023/05/02 16:01:36 by alfofern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <string.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

typedef struct s_num
{
	int			*a;
	int			*b;
	int			*t;
	int			argc;
	char		**argv;
	int			sizea;
	int			sizeb;
	int			sizet;
	int			mult;
	int			div;
	int			subdivm;
	int			nummax;
	int			nums;
	int			check;
}				t_num;

/*push_swap.c*/
int		*ft_split_check_args(t_num *dt);
void	ft_convert_int(char **toi, t_num *dt);

/*big_numbers.c*/
void	s_hundred(t_num *dt);
void	s_five_hundred(t_num *dt);

/*checkargs.c*/
void	exit_error(int err);
int		ft_check_num(char *c);
int		isrepeated(int *a, int size);
int		isrepeated_char(char *a[]);
int		ft_check_num_array(char **a, int size);

/*dt_init.c*/
int		init_stacks(t_num *dt);
t_num	*initdt(t_num	*dt, int argc, char **argv);

/** ft_free_exit.c
 * frees each stack if they exist and then frees the structure
 * and exit(0);
**/
void	ft_free_exit(t_num *td);

/**
 * @brief convert a char to int and send error
  if the number is out of range
 * 
 * @param str char
 * @return number converted to int 
 */
int		ft_long_atoi(const char *str);

/*sort_utils.c*/
int		ft_checkifsorted(int *array, int size);
void	ft_indexforint(t_num *dt);
int		find_place(t_num *dt);

/* push_swap_utils.c*/
int		ft_indexorder(int *array, int size);
int		size_array(char **array);
int		ft_strcmp(const char *s1, const char *s2);

/*form Libft*/
int		ft_isdigit(int c);
char	*ft_strdup(const char *s1);
char	*ft_strdup(const char *s1);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	**ft_split(char const *s, char c);
size_t	ft_strlen(const char *s);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t count, size_t size);

/*sort_big.c*/
void	ft_sort_data(t_num *dt);

/**sort_small.c**/
void	ft_sort_small(t_num *dt);

/*quick_sort.c*/
void	quicksort(int array[], int n);

/*mov_swapandpush.c*/
void	sa(t_num *dt);
void	sb(t_num *dt);
void	ss(t_num *dt);
void	pa(t_num *dt);
void	pb(t_num *dt);

/*mov_rotate.c*/
void	ra(t_num *dt);
void	rb(t_num *dt);
void	rr(t_num *dt);

/*mov_revrotate.c*/
void	rra(t_num *dt);
void	rrb(t_num *dt);
void	rrr(t_num *dt);
/*sort.c*/
void	s_trhee(t_num *dt);
void	s_five(int *a, t_num *dt);
void	s_four(int *a, t_num *dt);

#endif	
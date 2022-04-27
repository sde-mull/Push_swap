/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde-mull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 18:22:13 by sde-mull          #+#    #+#             */
/*   Updated: 2022/02/28 19:24:11 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSH_SWAP_H
# define FT_PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include "../Libft/libft.h"

typedef struct Node
{
	int			value;
	struct Node	*next;
}	t_Node;

typedef struct var
{
	int 		*sort_arr;
    int 		mid;
    int 		len;
    int 		index;
	int 		first;
    int 		second;
    int 		swap;
    int 		add;
	long long	converted;
	int     	check;
    int     	count;
	int 		checker;
	int     	value;
	int     	nvalue;
	int			checked;
	int			*arr;
	int			check_nbr;
	int			sort;
	int 		*top;
    int 		*bot;
	int 		inv;
} v_ar;

//ft_arr_fun

int    	ft_retmidval(t_Node *stack);
int     ft_get_mid_number(int *arr, t_Node *stack_A, int len);
void    ft_fill_arr(int *arr, t_Node *stack_A, int len);
void    ft_sort_arr(int *arr, int len);

//ft_arr

int    ft_retarrval(t_Node *stack, int *top, int *bot, int inv);

//ft_auxfun

void	ft_insert_number(t_Node **root, int value);
t_Node	*ft_stack(int argc, char *argv[]);
void	ft_deallocate(t_Node **root);

//ft_check

void	ft_check_number_error(char *argv);
void	ft_check_error_limits(long long converted);
void	ft_check_double_error(t_Node **stack_A);
int		ft_check_sorted(t_Node *stack_A);
int		ft_check_B_numbers(t_Node *stack_A, t_Node *stack_B);

//ft_check2

int		ft_check_value(t_Node *stack, int mid);
int 	ft_check_command(t_Node *stack_B, int value, int len);
int		ft_check_path(t_Node *stack_A, int mid);
int 	ft_check_nv(int temp, int nvalue, t_Node **stack_A, t_Node **stack_B);

//ft_check3

int 	ft_checkit(int i, int c, t_Node *stka, int *top);
int 	ft_checkib(int i, int c, t_Node *stka, int *bot);
int		ft_check_lpath(t_Node *stack_A);
int 	ft_checktop(t_Node *stack, int top1, int top2);
int 	ft_checkbot(t_Node *stack, int bot1, int bot2);

//ft_check4

void   	ft_check_ss(t_Node **stack_A, t_Node **stack_B);
void 	ft_check_rrr(t_Node **stack_A, t_Node **stack_B);
void 	ft_check_rr(t_Node **stack_A, t_Node **stack_B);
void   	ft_check_sb(t_Node **stack_B);

//ft_commands1

void	ft_sa(t_Node **stack_A);
void	ft_sb(t_Node **stack_B);
void	ft_ss(t_Node **stack_A, t_Node **stack_B);
void	ft_pa(t_Node **stack_A, t_Node **stack_B);

//ft_commands2

void	ft_ra(t_Node **stack_A);
void	ft_rb(t_Node **stack_B);
void	ft_rr(t_Node **stack_A, t_Node **stack_B);
void	ft_pb(t_Node **stack_A, t_Node **stack_B);

//ft_commands3

void	ft_rra(t_Node **stack_A);
void	ft_rrb(t_Node **stack_B);
void	ft_rrr(t_Node **stack_A, t_Node **stack_B);

//ft_commfun

void	ft_swap(t_Node **stack);
void	ft_rotate(t_Node **stack);
void	ft_reverse(t_Node **stack);
void	ft_push(t_Node **srcstack, t_Node **dststack);

//ft_sendtop

void 	ft_sendtop(int midarr, t_Node **stkA, t_Node **stkB);
int     ft_get_value(t_Node *stack_B);
void 	ft_use_command(t_Node **stack_B, int check, int value);
void 	ft_send_value(int midarr, t_Node **stkA, t_Node **stkB);
int     ft_get_nvalue(t_Node *stack_B);

//ft_sort_all

void    ft_sort_all(t_Node **stack_A, t_Node **stack_B);
void    ft_fill_b(t_Node **stack_A, t_Node **stack_B, int mid);
int		ft_film_check(t_Node **stack_A, t_Node **stack_B);
void	ft_send_b(t_Node **stack_A, t_Node **stack_B, int mid);
void	ft_command_path(t_Node **stack_A, t_Node **stack_B, int checker, int mid);

//ft_sort

void	ft_sort(t_Node **stack_A, t_Node **stack_B);
void	ft_2_sort(t_Node **stack_A);
void	ft_3_sort(t_Node **stack_A);
void 	ft_sort_5(t_Node **stack_A, t_Node **stack_B);

//ft_sorteve

void    ft_sorteve(t_Node **stack_A, t_Node **stack_B);
void    ft_pub(t_Node **stka, t_Node **stkb, int *top, int *bot, int c);
void 	ft_purb(t_Node **stka, t_Node **stkb, int *top, int *bot);

//ft_stacklfun

int		ft_stack_length(t_Node *stack_A);
int    	ft_retarrl(t_Node *stack, int inv);
void 	ft_doc(t_Node **stack_B, int value);

//ft_steps

t_Node	*ft_steps(int argc, char *argv[]);
void  	printstack(t_Node *stack_A, t_Node *stack_B);

#endif
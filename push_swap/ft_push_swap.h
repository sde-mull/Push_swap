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

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "../Libft/libft.h"

typedef struct Node
{
	int value;
	struct Node *next;
} Node;

void    insert_number(Node **root, int value);
Node    *ft_steps(int argc, char *argv[]);
Node    *stack(int argc, char *argv[]);
void    deallocate(Node **root);
void    swap(Node *stack);
void    ft_sa(Node *stack_A);
void    ft_sb(Node *stack_B);
void    ft_ss(Node *stack_A, Node *stack_B);
Node    *ft_ra(Node *stack_A);
Node    *ft_rr(Node *stack_A, Node *stack_B);
Node    *ft_rb(Node *stack_B);
Node    *rotate(Node *stack);
void    remove_element(Node** root, int value);

#endif
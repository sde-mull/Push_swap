/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorteve.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde-mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 23:48:15 by sde-mull          #+#    #+#             */
/*   Updated: 2022/04/07 23:48:15 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void    ft_sorteve(t_Node **stack_A, t_Node **stack_B)
{
    int *top;
    int *bot;
    int count;
    int inv;
    int mid;

    inv = ft_check_lpath(*stack_A);
    count = ft_retarrl(*stack_A, inv);
    top = malloc(count * sizeof(int));
    bot = malloc(count * sizeof(int));
    mid = ft_retarrval(*stack_A, top, bot, inv);
    ft_pub(stack_A, stack_B, top, bot, count);
    //printstack(*stack_A,*stack_B);
    if (ft_check_sorted(*stack_A) == 0)
        ft_sort_5(stack_A, stack_B);
    //printstack(*stack_A,*stack_B);
    while (ft_get_value(*stack_B) >= mid)
    	ft_sendtop(mid, stack_A, stack_B);
    while ((*stack_A)->value >= mid)
        ft_ra(stack_A);
    while ((*stack_B) != NULL)
        ft_send_value(mid, stack_A, stack_B);
}

void    ft_pub(t_Node **stka, t_Node **stkb, int *top, int *bot, int c)
{
    int i;
    int ii;

    i = 0;
    ii = 0;
    while(ft_stack_length(*stka) > 5)
    {
        /*printf("\nbot value is this two %d |||| %d\n",  bot[ii],  bot[ii + 1]);
        printf("top value is this two %d |||| %d\n",  top[i],  top[i + 1]);
        printf("bot ii||| top i value is this two %d |||| %d\n", ii, i);
        printf("stka->value value is %d\n", (*stka)->value);
        printf("c is this value %d\n", c);*/
        if ((*stka)->value > top[i] && (*stka)->value <= top[i + 1])
            ft_pb(stka, stkb);
        else if ((*stka)->value < bot[ii] && (*stka)->value >= bot[ii + 1])
        {
            ft_pb(stka, stkb);
            ft_rb(stkb);
        }
        else
            ft_ra(stka);
        i = ft_checkit(i, c, *stka, top);
        ii = ft_checkib(ii, c, *stka, bot);
        if (i + 1 == c && ii + 1 == c)
            ft_purb(stka, stkb, top, bot);
    }
}

void ft_purb(t_Node **stka, t_Node **stkb, int *top, int *bot)
{
    while (ft_stack_length(*stka) > 5)
    {
        if ((*stka)->value > top[0])
            ft_pb(stka, stkb);
        else if((*stka)->value < bot[0])
        {
            ft_pb(stka, stkb);
            ft_rb(stkb);
        }
        else
            ft_ra(stka);
    }
}

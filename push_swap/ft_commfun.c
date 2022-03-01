/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_commfun.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde-mull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 19:00:39 by sde-mull          #+#    #+#             */
/*   Updated: 2022/02/28 19:15:15 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void    swap(Node *stack)
{
    int temp;

    temp = stack->value;
    stack->value = stack->next->value;
    stack->next->value = temp;
}

void    rotate(Node **stack)
{
    Node *first;
    Node *last;

    first = *stack;
    last = *stack;
    if (*stack == NULL || (*stack)->next == NULL)
        return;
    while (last->next != NULL)
        last = last->next;
    *stack = first->next;
    first->next = NULL;
    last->next = first;   
}

void    reverse(Node **stack)
{
    Node *slast;
    Node *last;

    slast = NULL;
    last = *stack;
    if (*stack == NULL || (*stack)->next == NULL)
        return;
    while (last->next != NULL)
    {
        slast = last;
        last = last->next;
    }
    slast->next = NULL;
    last->next = *stack;
    *stack = last;
}

void    push(Node **srcstack, Node **dststack)
{
    Node *srctmp;
    Node *dsttmp;

    srctmp = *srcstack;
    dsttmp = *dststack;
    if (*srcstack == NULL)
        return;
    if (*dststack == NULL)
    {
        *srcstack = srctmp->next;
        srctmp->next = NULL;
        *dststack = srctmp;
        return;
    }
    *srcstack = srctmp->next;
    srctmp->next = NULL;
    srctmp->next = *dststack;
    *dststack = srctmp;
}
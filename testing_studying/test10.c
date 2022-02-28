/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde-mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 15:39:26 by sde-mull          #+#    #+#             */
/*   Updated: 2022/02/23 15:39:26 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int x;
    struct Node *next;
} Node;

int	ft_atoi(const char *str);

Node *stack_a(int argc, char *argv[])
{
    Node *fill = NULL;


}

int main(int argc, char *argv[])
{
    Node *stack;

    stack = stack_a(argc, argv);
    Node *curr = stack;
    while (curr != NULL)
    {
        printf("%d\n", curr->x);
        curr = curr->next;
    }
    return (0);
}

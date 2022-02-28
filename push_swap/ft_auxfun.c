/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_auxfun.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde-mull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 18:50:58 by sde-mull          #+#    #+#             */
/*   Updated: 2022/02/28 18:54:31 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void insert_number(Node **root, int value)
{
    Node* new_node = malloc(sizeof(Node));
    if (new_node == NULL)
        exit(2);
    new_node->next = NULL;
    new_node->value = value;

    if (*root == NULL)
    {
        *root = new_node;
        return ;
    }
    Node *curr = *root;
    while (curr->next != NULL)
        curr = curr->next;
    curr->next = new_node;
}

Node *stack(int argc, char *argv[])
{
    int index;
    int converted;
    Node *root = NULL;

    index = 1;
    while (index < argc)
    {
        converted = ft_atoi(argv[index]);
        insert_number(&root, converted);
        index++;
    }
    return(root);
}

void deallocate(Node **root)
{
    Node *curr = *root;
    while (curr != NULL)
    {
        Node *aux = curr;
        curr = curr->next;
        free(aux);
    }
    *root = NULL;
}
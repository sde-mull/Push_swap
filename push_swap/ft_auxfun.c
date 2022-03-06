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
    Node* new_node;
    Node *curr;

    new_node  = malloc(sizeof(Node));
    if (new_node == NULL)
        exit(2);
    new_node->next = NULL;
    new_node->value = value;

    if (*root == NULL)
    {
        *root = new_node;
        return ;
    }
    curr = *root;
    while (curr->next != NULL)
        curr = curr->next;
    curr->next = new_node;
}

Node *stack(int argc, char *argv[])
{
    int index;
    long long converted;
    Node *root;
    root = NULL;

    index = 1;
    while (index < argc)
    {
        ft_check_number_error(argv[index]);
        converted = ft_atoil(argv[index]);
        ft_check_error_limits(converted);
        insert_number(&root, converted);
        index++;
    }
    return(root);
}

void deallocate(Node **root)
{
    Node *curr;
    Node *aux; 

    curr = *root;
    while (curr != NULL)
    {
        aux = curr;
        curr = curr->next;
        free(aux);
    }
    *root = NULL;
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test6.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde-mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 19:59:05 by sde-mull          #+#    #+#             */
/*   Updated: 2022/02/24 19:59:05 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int value;
    struct Node *next;
} Node;

int	ft_atoi(const char *str);

void insert_number(Node **root, int value)
{
    Node* new_node = malloc(sizeof(Node));
    if (new_node == NULL)
        exit(1);
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

Node *stack_a(int argc, char *argv[])
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
    return (root);
}

void    swaptest_sa(Node *stack_a)
{
    int temp;

    temp = stack_a->value;
    stack_a->value = stack_a->next->value;
    stack_a->next->value = temp;
}

int main(int argc, char *argv[])
{
    Node *stack;

    if (argc <= 1)
        exit(1);
    stack = stack_a(argc, argv);
    swaptest_sa(stack);
    Node *curr = stack;
    while (curr != NULL)
    {
        printf("%d\n", curr->value);
        curr = curr->next;
    }
    deallocate(&stack);
    return (0);
}


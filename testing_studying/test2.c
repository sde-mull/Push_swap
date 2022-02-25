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

void insert_number(Node **root, int value)
{
    Node* new_node = malloc(sizeof(Node));
    if (new_node == NULL)
        exit(1);
    new_node->next = NULL;
    new_node->x = value;

    Node *curr = *root;
    while (curr->next != NULL)
        curr = curr->next;
    curr->next = new_node;
}

Node *stack_a(int argc, char *argv[])
{
    int index;
    int converted;
    Node *root = malloc(sizeof(Node));

    if (root == NULL)
        exit(2);
    converted = ft_atoi(argv[1]);
    root->x = converted;
    root->next = NULL;
    index = 2;
    while (index < argc)
    {
        converted = ft_atoi(argv[index]);
        insert_number(&root, converted);
        index++;
    }
    return (root);
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

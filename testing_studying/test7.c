/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test7.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde-mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 16:49:25 by sde-mull          #+#    #+#             */
/*   Updated: 2022/02/27 16:49:25 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>


typedef struct Node
{
    int value;
    struct Node *next;
} Node;

void insert_number(Node **root, int value);

void remove_element(Node** root, int value)
{
    if (root == NULL)
        return;
    if ((*root)->value == value)
    {
        Node *to_remove = *root;
        *root = (*root)->next;
        free(to_remove);
        return;
    }
    Node *curr = *root;
    while (curr->next != NULL)
    {
        if (curr->next->value == value)
        {
            Node *to_remove = curr->next;
            curr->next = curr->next->next;
            free(to_remove);
            return;
        }
        curr = curr->next;
    }
}

Node *rotatetest(Node *stack)
{
    int exvalue;
    Node *new_node;

    exvalue = stack->value;
    new_node = malloc(sizeof(Node));
    if (new_node == NULL)
        exit(3);
    while (stack->next != NULL)
    {
        stack = stack->next;
        insert_number(&new_node, stack->value);
    }
    insert_number(&new_node, exvalue);
    return(new_node);
}

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

int main()
{
    Node *stack = NULL;
    int x;

    x = 0;
    while (x < 10)
    {
        insert_number(&stack, x);
        x++;
    }
    stack = rotatetest(stack);
    remove_element(&stack, stack->value);
    stack = rotatetest(stack);
    remove_element(&stack, stack->value);
    stack = rotatetest(stack);
    remove_element(&stack, stack->value);
    stack = rotatetest(stack);
    remove_element(&stack, stack->value);
    stack = rotatetest(stack);
    remove_element(&stack, stack->value);
    stack = rotatetest(stack);
    remove_element(&stack, stack->value);
    Node *curr = stack;
    while (curr != NULL)
    {
        printf("%d\n", curr->value);
        curr = curr->next;
    }
    deallocate(&stack);
    return(0);
}
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
#include <unistd.h>

typedef struct Node
{
    int value;
    struct Node *next;
} Node;

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

int	ft_atoi(const char *str);

t_list  *ft_lstlast(t_list *lst);

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

void    swaptest(Node *stack)
{
    int temp;

    temp = stack->value;
    stack->value = stack->next->value;
    stack->next->value = temp;
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

Node  *ft_ra(Node *stack)
{
    Node *new;

    new = rotatetest(stack);
    remove_element(&new, new->value);
    write(1, "ra\n", 4);
    deallocate(&stack);
    return(new);
}

int main(int argc, char *argv[])
{
    Node *stack;

    if (argc <= 1)
        exit(1);
    stack = stack_a(argc, argv);
    stack = reversetest(stack);
    Node *curr = stack;
    while (curr != NULL)
    {
        printf("%d\n", curr->value);
        curr = curr->next;
    }
    deallocate(&stack);
    return (0);
}


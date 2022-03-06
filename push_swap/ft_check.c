/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde-mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 21:58:31 by sde-mull          #+#    #+#             */
/*   Updated: 2022/03/03 21:58:31 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void ft_check_number_error(char *argv)
{
    int index2;

    index2 = 0;
    while (argv[index2])
        {
            if ((argv[index2] < '0' || argv[index2] > '9') && 
                argv[index2] != '-'  && argv[index2] != '+' )
            {
                write(2, "Error\n", 7);
                exit(EXIT_FAILURE);
            }
            index2++;
        }
}

void ft_check_error_limits(long long converted)
{
    if (converted <= INT_MAX && converted >= INT_MIN)
        return;
    write(2, "Error\n", 7);
    exit(EXIT_FAILURE);
}
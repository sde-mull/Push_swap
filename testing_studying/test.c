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

int	ft_atoi(const char *str);

int main(int argc, char *argv[])
{
    int index;
    int result;
    int conversion;

    result = 1;
    index = 1;
    conversion = 0;
    while (index < argc)
    {
        printf("The argc[%d] value is %s \n", index, argv[index]);
        conversion = ft_atoi(argv[index]);
        result = conversion * 2;
        printf("The double of %d is %d\n", conversion, result);
        index++;
    }
    return (0);
}
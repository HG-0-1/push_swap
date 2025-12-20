/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uitle.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helfayez <helfayez@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 15:45:18 by helfayez          #+#    #+#             */
/*   Updated: 2025/12/20 16:13:28 by helfayez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void add_node(t_node **a, int val)
{
    t_node *new;
    t_node *tmp;
    
    new = malloc(sizeof(t_node));
    if (!new)
        return;
    new -> value = val;
    new -> index = -1;
    new -> next = NULL;

    if (!*a)
    {
    *a = new;
    return;
    }
    tmp = *a;
    while (tmp -> next)
        tmp = tmp -> next;
    tmp -> next = new;
}

t_node *to_de_stack(int argc, char **argv)
{
t_node *a;
int i;

a = NULL;
i = 1;
while (i < argc)
{
    add_node(&a, ft_atoi(argv[i]));
    i++;
}
 return a;
}
void index_stack(t_node *a)
{
    t_node *x;
    t_node *y;
    int index;

    x = a;
    while (x)
    {
        index = 0;
        y = a;
        while (y)
        {
            if (y -> value < x -> value)
                index++;
            y = y -> next;
        }
        x -> index = index;
        x = x -> next;
        
    }
    
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uitle.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helfayez <helfayez@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 15:45:18 by helfayez          #+#    #+#             */
/*   Updated: 2025/12/25 20:56:23 by helfayez         ###   ########.fr       */
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
int find_min(t_node *a)
{
    int min;
    if(!a)
        return 0;
    min = a -> index;
    while(a)
        {
            if(a -> index < min)
                min = a -> index;
            a = a -> next;
        }
    return min;
}
int find_my_min(t_node *a)
{
    int min;
    int po;

    min = find_min(a);
    po = 0;
    while(a)
        {
        if(min == a -> index)
            return po;
        po++;
            a = a -> next;
        }
    return 0;
}

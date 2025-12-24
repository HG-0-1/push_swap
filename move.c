/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helfayez <helfayez@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 16:22:29 by helfayez          #+#    #+#             */
/*   Updated: 2025/12/24 18:15:54 by helfayez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int pb(t_node **a, t_node **b)
{
    t_node *tmp;
    
    if (!a ||!*a)
        return 0;
        
    tmp = *a;
    *a = (*a) -> next;
    
    tmp -> next = *b;
    *b = tmp;
    write(1, "pb\n", 3);
    return 1;  
}
int pa(t_node **a, t_node **b)
{
    t_node *tmp;
    
    if (!b || !*b)
        return 0;

    tmp = *b;
    *b = (*b) -> next;
    
    tmp -> next = *a;
    *a = tmp;
    write(1, "pa\n", 3);
    return 1;
}
int ra(t_node **a)
{
    t_node *first;
    t_node *last;
    
    if (!a || !*a || !(*a) -> next)
        return 0;
    first = *a;
    *a = first -> next;
    last = *a;
    while (last -> next)
        last = last -> next;
        
    last -> next = first;
    first -> next = NULL;
    write(1, "ra\n", 3);
    return 1;
}
int sa(t_node **a)
{
    int tmpv;
    int tmpi;
    
    if(!a || !*a || !(*a) -> next)
        return 0;
    tmpv = (*a)-> value;
    tmpi = (*a) -> value;
    (*a) -> value = (*a) -> next -> value;
    (*a) -> index = (*a) -> next -> index;
    (*a) -> next ->value =tmpv;
    (*a) -> next ->index =tmpi;
    write(1,"sa\n",3);
    return 1;
}
int rra(t_node **a)
{
    t_node *befor;
    t_node *last;
    
    if (!a || !*a || !(*a) -> next)
        return 0;
    last = *a;
    while (last -> next)
    {
        befor = last;
        last = last -> next;
    }   
    last -> next = *a;
    befor -> next = NULL;
    *a = last;
    write(1, "rra\n", 4);
    return 1;
}

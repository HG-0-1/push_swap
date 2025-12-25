/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uitle2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helfayez <helfayez@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 20:57:43 by helfayez          #+#    #+#             */
/*   Updated: 2025/12/25 21:01:51 by helfayez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int is_sort(t_node *a)
{
    while (a && a -> next)
    {
        if(a -> value > a -> next -> value)
        return 0;
        a = a -> next;
    }
    return 1;
    
}
void	free_stack(t_node **stack)
{
	t_node	*tmp;

	if (!stack || !*stack)
		return ;
	while (*stack)
	{
		tmp = (*stack)->next;
		free(*stack);
		*stack = tmp;
	}
}
void free1(t_node *a, t_node *b)
{
free_stack(&a);
free_stack(&b);
}
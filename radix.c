/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helfayez <helfayez@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 16:49:51 by helfayez          #+#    #+#             */
/*   Updated: 2025/12/25 16:07:04 by helfayez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	max_bit(t_node *a)
{
	int	max;
	int	bit;
	int	i;

	max = 0;
	bit = 0;
	i = 0;
	while (a)
	{
		if (a->index > max)
			max = a->index;
		a = a->next;
	}
	while ((max >> bit) != 0)
	{
		bit++;
	}
	return (bit);
}

int	stack_size(t_node *stack)
{
	int	count;

	count = 0;
	while (stack)
	{
		count++;
		stack = stack->next;
	}
	return (count);
}
void radix_helper(t_node **a, t_node **b, int bit)
{
	int	size;
	int i;
			size = stack_size(*a);	
			i = 0;
		while (i < size)
		{
			if ((((*a)->index >> bit) & 1) == 0)
			{
				pb(a, b);
			}
			else
			{
				ra(a);
			}
			i++;
		}
}

void	radix(t_node **a, t_node **b)
{
	int	bits;
	int	bit;

	
	bits = max_bit(*a);
	bit = 0;
	while (bit < bits)
	{
		radix_helper(a, b, bit);
		while (*b)
			pa(a, b);
		bit++;
	}
}

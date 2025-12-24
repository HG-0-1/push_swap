/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handel_num.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helfayez <helfayez@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 18:59:52 by helfayez          #+#    #+#             */
/*   Updated: 2025/12/24 19:00:17 by helfayez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	handel_with_2(t_node **a)
{
	if ((*a)->index < (*a)->next->index)
	{
		return ;
	}
	else
	{
		ra(a);
	}
}

void	handel_with_3(t_node **a)
{
    int one;  
    int two;
    int thi;
    
    one = (*a)->index;
    two = (*a)->next->index;
    thi = (*a)->next->next->index;
	if (one < two && two < thi)
		return ;
	else if (one > two && two < thi && one < thi)
		sa(a);
	else if (one < two && two > thi && thi > one)
	{
		sa(a);
		ra(a);
	}
	else if (one < two && one > thi && thi < two)
        rra(a);
    else if (one > two && two > thi && thi < one)
    {
        sa(a);
        rra(a);
    }
    else if(one > two && two < thi && thi < one)
    ra(a);
}
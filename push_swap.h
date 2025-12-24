/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helfayez <helfayez@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 17:30:59 by helfayez          #+#    #+#             */
/*   Updated: 2025/12/24 18:03:40 by helfayez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

typedef struct s_node
{
    int value;
    int index;
    struct s_node *next;
} t_node;


int max_bit(t_node *a);
int stack_size(t_node *stack);
void radix(t_node **a, t_node **b);
int ra(t_node **a);
int pa(t_node **a, t_node **b);
int pb(t_node **a, t_node **b);
t_node *to_de_stack(int argc, char **argv);
void add_node(t_node **a, int val);
void index_stack(t_node *a);
void handel_with_2(t_node **a);
int sa(t_node **a);
void	handel_with_3(t_node **a);
int rra(t_node **a);
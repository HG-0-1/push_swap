/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helfayez <helfayez@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 17:30:59 by helfayez          #+#    #+#             */
/*   Updated: 2025/12/25 21:06:32 by helfayez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"
#include<stdio.h>
#include <limits.h>

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
int find_min(t_node *a);
int find_my_min(t_node *a);
void handel_with_4(t_node **a, t_node **b);
void handel_with_5(t_node **a, t_node **b);
void handel_in5(t_node **a, t_node **b);
void radix_helper(t_node **a, t_node **b, int bit);
int if_diget(char **argv);
int dup_num(char **argv);
int max_int(char **argv);
int main_helper(int argc, t_node **a, t_node **b);
int is_sort(t_node *a);
void	free_stack(t_node **stack);
void free1(t_node *a, t_node *b);
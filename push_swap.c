/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helfayez <helfayez@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 17:38:10 by helfayez          #+#    #+#             */
/*   Updated: 2025/12/25 21:06:58 by helfayez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int max_int(char **argv)
{
	int i;
	long num;
	
	i = 0;
	while (argv[i])
	{
		num = ft_atoi(argv[i]);
		if(INT_MIN > num || INT_MAX < num)
			return 0;
		i++;
	}
	return 1;
	
}

int dup_num(char **argv)
{
	int i;
	int j;
	
	i = 0;
	while (argv[i])
	{
		j = i + 1;
		while (argv[j])
		{
			if(ft_atoi(argv[i]) == ft_atoi(argv[j]))
				return 0;
			j++;
		}
		i++;
	}
	return 1;
}
int if_diget(char **argv)
{
	int i;
	int j;
	
	i = 0;
	while(argv[i])
	{
		j = 0;
		if(argv[i][j] == '-' || argv[i][j] == '+')
		{
			if(argv[i][j + 1] == '\0')
				return 0;
			j++;
		}
		if(argv[i][j] == '\0')
			return 0;
		while(argv[i][j])
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
				return 0;
			j++;
		}
		i++;
	}
	return 1;
}
int main_helper(int argc, t_node **a, t_node **b)
{
	if (argc == 3)
	{
		handel_with_2(a);
		return(0);
	}
	if (argc == 4)
	{
	 	handel_with_3(a);
		return 0;
	}
	if (argc == 5)
	{
	 	handel_with_4(a, b);
		return 0;
	}
	if (argc == 6)
	{
	 	handel_with_5(a, b);
		return 0;
	}
	return 1;
}

int	main(int argc, char **argv)
{
	t_node *a;
	t_node *b;

		a = 0;
	b = 0;
	if (argc < 2)
		return (0);
	if((if_diget(argv + 1) == 0) || (dup_num(argv + 1) == 0) || 
		(max_int(argv + 1) == 0))
	{
		write(2,"Error\n",6);
		exit(0);
	}
	a = to_de_stack(argc,argv);
	if (!a)
		return 0;
	if(is_sort(a))
	{
		free1(a, b);
		return 0;
	}
	index_stack(a);
	if(!main_helper(argc, &a, &b))
	{
		free1(a, b);
		return 0;
	}
    radix(&a , &b);
	free1(a, b);
	return 0;
}

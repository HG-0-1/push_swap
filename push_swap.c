/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helfayez <helfayez@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 17:38:10 by helfayez          #+#    #+#             */
/*   Updated: 2025/12/24 17:13:18 by helfayez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_node *a;
	t_node *b;

	if (argc < 2)
		return (0);
	a = 0;
	b = 0;
	a = to_de_stack(argc,argv);
	if (!a)
		return 1;
	index_stack(a);
	if (argc == 3)
	{
		handel_with_2(&a);
		return(0);
	}
	 if (argc == 4)
	 {
	 	handel_with_3(&a);
		return 0;
	}
	
    radix(&a , &b);
return 0;
}

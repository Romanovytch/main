/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flgivern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 14:19:15 by flgivern          #+#    #+#             */
/*   Updated: 2018/08/01 14:47:35 by flgivern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb);

int	main()
{
	int	i;

	i = -1;
	while (i <= 13)
	{
		printf("!%d = %d\n", i, ft_recursive_factorial(i));
		++i;
	}	
	return (0);	
}

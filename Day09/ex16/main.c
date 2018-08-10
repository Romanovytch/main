/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flgivern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 11:23:56 by flgivern          #+#    #+#             */
/*   Updated: 2018/08/10 15:15:49 by flgivern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_active_bits(int value);

int	main()
{
	int	i;

	i = 0;
	while (i < 20)
	{
		printf("Active bits in %d : %d\n", i, ft_active_bits(i));
		++i;
	}
	return (0);
}

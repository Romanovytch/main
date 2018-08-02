/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flgivern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 19:05:07 by flgivern          #+#    #+#             */
/*   Updated: 2018/08/01 19:55:47 by flgivern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb);

int	main()
{
	int	i;

	i = 0;
	while (i < 1000000)
	{
		printf("Is %d prime ? : %d\n", i, ft_is_prime(i));
		++i;
	}
}
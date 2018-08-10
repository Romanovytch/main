/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flgivern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 20:27:44 by flgivern          #+#    #+#             */
/*   Updated: 2018/08/04 15:24:46 by lgillett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_find_next_prime(int nb);

int	main()
{
	int	nb;

	nb = 1453168142;
	printf("Next prime of %d is %d (expecting 1453168433)\n", nb, ft_find_next_prime(nb));
	return (0);
}

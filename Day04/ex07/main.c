/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flgivern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 20:27:44 by flgivern          #+#    #+#             */
/*   Updated: 2018/08/01 20:54:15 by flgivern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_find_next_prime(int nb);

int	main()
{
	int	nb;
	
	nb = 0;
	printf("Next prime of %d is %d (expecting 2)\n", nb, ft_find_next_prime(nb));
	nb = 3;
	printf("Next prime of %d is %d (expecting 3)\n", nb, ft_find_next_prime(nb));
	nb = 15684;
	printf("Next prime of %d is %d (expecting 15727)\n", nb, ft_find_next_prime(nb));
	nb = 370262;
	printf("Next prime of %d is %d (expecting 370373)\n", nb, ft_find_next_prime(nb));
	return (0);
}

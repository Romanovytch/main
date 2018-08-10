/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flgivern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 06:39:45 by flgivern          #+#    #+#             */
/*   Updated: 2018/08/10 12:58:30 by lgillett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_collatz_conjecture(unsigned int base);

int	main()
{
	printf("Temps de vol pour base=%d : %d\n", 1000, ft_collatz_conjecture(1000));
	printf("Temps de vol pour base=%d : %d\n", 14, ft_collatz_conjecture(14));
	printf("Temps de vol pour base=%d : %d\n", 1, ft_collatz_conjecture(1));
	printf("Temps de vol pour base=%d : %d\n", 2, ft_collatz_conjecture(2));
	return (0);
}

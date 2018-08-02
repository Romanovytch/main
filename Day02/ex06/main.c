/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flgivern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 12:27:33 by flgivern          #+#    #+#             */
/*   Updated: 2018/08/02 02:06:39 by flgivern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putnbr(int nb);
void	ft_putchar(char c);

int	main()
{
	printf("Testing 422764780 :\n");
	ft_putnbr(422764780);
	printf("\nTesting -996722818 :\n");
	ft_putnbr(-996722818);
	printf("\nTesting -1099426262 :\n");
	ft_putnbr(-1099426262);
	printf("\nTesting 1097570305 :\n");
	ft_putnbr(1097570305);
	printf("\nTesting -2147483648 :\n");
	ft_putnbr(-2147483648);
	printf("\nTesting 2147483647 :\n");
	ft_putnbr(2147483647);
	printf("\nTesting 151500000 :\n");
	ft_putnbr(151500000);
	printf("\nTesting 548640464 :\n");
	ft_putnbr(548640464);
	printf("\nTesting -0 :\n");
	ft_putnbr(-0);
	printf("\nTesting 10 :\n");
	ft_putnbr(10);
	printf("\n");
}

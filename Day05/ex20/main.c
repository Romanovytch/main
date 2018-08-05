/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flgivern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/03 13:55:40 by flgivern          #+#    #+#             */
/*   Updated: 2018/08/04 20:41:18 by flgivern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putnbr_base(int nbr, char *base);

int	main()
{
	printf("\nConverting %d in basis \'%s\" : (expecting 1A4)\n", 420, "0123456789ABCDEF");
	ft_putnbr_base(420, "0123456789ABCDEF");
	printf("\nConverting %d in basis \'%s\" : (expecting 302251112)\n", 5154452, "012345");
	ft_putnbr_base(5154452, "012345");
	printf("\nConverting %d in basis \'%s\" : (expecting ))))))))))))((()(())))())(((((( )\n", 2147000000, "-+");
	ft_putnbr_base(2147000000, "()");
	printf("\nConverting %d in basis \'%s\" : (expecting 35A4E900)\n", 900000000, "0123456789ABCDEF");
	ft_putnbr_base(900000000, "0123456789ABCDEF");
	printf("\nConverting %d in basis \'%s\" : (expecting 7FFFFFFF)\n", 2147483647, "0123456789ABCDEF");
	ft_putnbr_base(2147483647, "0123456789ABCDEF");
	printf("\nConverting %d in basis \'%s\" : (expecting 0)\n", 0, "01234567");
	ft_putnbr_base(0, "01234567");
	printf("\nConverting %d in basis \'%s\" : (expecting bc)\n", 9, "abcdefg");
	ft_putnbr_base(9, "abcdefg");
	printf("\nConverting %d in basis \'%s\" : (expecting 100)\n", 4, "01");
	ft_putnbr_base(4, "01");
	printf("\nConverting %d in basis \'%s\" : (expecting -42)\n", -42, "0123456789");
	ft_putnbr_base(-42, "0123456789");
	printf("\nConverting %lu in basis \'%s\" : (expecting -.>..>.>>>.>..<><>.<>)\n", -2147483648, "<.>");
	ft_putnbr_base(-2147483648, "<.>");
	printf("\nConverting %d in basis \'%s\" : (expecting -10000000)\n", -268435456, "0123456789ABCDEF");
	ft_putnbr_base(-268435456, "0123456789ABCDEF");
	printf("\nConverting %d in basis \'%s\" : (expecting a)\n", 10, "0123456789ABCDEF");
	ft_putnbr_base(10, "0123456789ABCDEF");
	return (0);
}

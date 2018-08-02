/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flgivern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 12:07:42 by flgivern          #+#    #+#             */
/*   Updated: 2018/08/01 12:34:07 by flgivern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main()
{
	int	a;
	int	b;

	a = 10;
	b = 5;
	printf("Testing a=%d, b=%d :\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("-- Result : a=%d, b=%d :\n", a, b);
	a = 5;
	b = 10;
	printf("Testing a=%d, b=%d :\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("-- Result : a=%d, b=%d :\n", a, b);
	a = 42;
	b = 3;
	printf("Testing a=%d, b=%d :\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("-- Result : a=%d, b=%d :\n", a, b);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flgivern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 12:07:42 by flgivern          #+#    #+#             */
/*   Updated: 2018/08/01 12:24:47 by flgivern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main()
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 10;
	b = 5;
	ft_div_mod(a, b, &div, &mod);
	printf("Testing a=%d, b=%d : div=%d, mod=%d\n", a, b, div, mod);
	a = 5;
	b = 10;
	ft_div_mod(a, b, &div, &mod);
	printf("Testing a=%d, b=%d : div=%d, mod=%d\n", a, b, div, mod);
	a = 42;
	b = 3;
	ft_div_mod(a, b, &div, &mod);
	printf("Testing a=%d, b=%d : div=%d, mod=%d\n", a, b, div, mod);
	return (0);
}

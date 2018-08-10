/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flgivern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 22:06:27 by flgivern          #+#    #+#             */
/*   Updated: 2018/08/09 22:13:03 by flgivern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	antidote(int i, int j, int k);

int	main()
{
	int	a = 0;
	int	b = 1;
	int	c = 2;


	printf("Antidote i=%d, j=%d, k=%d : %d\n", a, b, c, ft_antidote(a, b, c));
	printf("Antidote i=%d, j=%d, k=%d : %d\n", b, a, c, ft_antidote(b, a, c));
	printf("Antidote i=%d, j=%d, k=%d : %d\n", c, a, b, ft_antidote(c, a, b));
	printf("Antidote i=%d, j=%d, k=%d : %d\n", c, b, a, ft_antidote(c, b, a));
	printf("Antidote i=%d, j=%d, k=%d : %d\n", a, a, c, ft_antidote(a, a, c));
	printf("Antidote i=%d, j=%d, k=%d : %d\n", c, a, a, ft_antidote(c, a, a));
	printf("Antidote i=%d, j=%d, k=%d : %d\n", a, c, a, ft_antidote(a, c, a));
	printf("Antidote i=%d, j=%d, k=%d : %d\n", b, b, c, ft_antidote(b, b, c));
	printf("Antidote i=%d, j=%d, k=%d : %d\n", a, b, b, ft_antidote(a, b, b));
	printf("Antidote i=%d, j=%d, k=%d : %d\n", b, b, c, ft_antidote(b, b, c));
	printf("Antidote i=%d, j=%d, k=%d : %d\n", a, c, c, ft_antidote(a, c, c));
	return (0);
}

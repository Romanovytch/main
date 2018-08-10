/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flgivern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 08:10:36 by flgivern          #+#    #+#             */
/*   Updated: 2018/08/10 09:10:17 by flgivern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_scrambler(int ***a, int *b, int *******c, int ****d);

int	main()
{
	int	a;
	int *ptra;
	int **ptra1;
	int	b;
	int c;
	int *ptrc;
	int **ptrc1;
	int ***ptrc2;
	int ****ptrc3;
	int *****ptrc4;
	int ******ptrc5;
	int d;
	int *ptrd;
	int **ptrd1;
	int ***ptrd2;

	a = 1;
	b = 2;
	c = 3;
	d = 4;

	ptra = &a;
	ptra1 = &ptra;

	ptrc = &c;
	ptrc1 = &ptrc;
	ptrc2 = &ptrc1;
	ptrc3 = &ptrc2;
	ptrc4 = &ptrc3;
	ptrc5 = &ptrc4;

	ptrd = &d;
	ptrd1 = &ptrd;
	ptrd2 = &ptrd1;
	ft_scrambler(&ptra1, &b, &ptrc5, &ptrd2);	
	printf("a=%d b=%d c=%d d=%d\n", a, b, c, d);
}

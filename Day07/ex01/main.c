/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flgivern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 22:53:19 by flgivern          #+#    #+#             */
/*   Updated: 2018/08/06 16:28:34 by flgivern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max);

void	print_tab(int *tab, int min, int max)
{
	int	i;
	int	len;

	i = 0;
	printf("Min : %d, Max : %d\n", min, max);
	len = max - min;
	if (tab == NULL)
		printf("Tab is NULL\n");
	while (i < len)
	{
		printf("Tab[%d] : %d\n", i, tab[i]);
		++i;
	}
}

void	test(int *tab, int min, int max)
{
	unsigned int	i;
	unsigned int	len;
	unsigned int	ctr;

	i = 0;
	ctr = 0;
	len = max - min;
	printf("Min : %d, Max : %d\n", min, max);
	while (i < len)
	{
		if (tab[i] == min)
			ctr++;
		++i;
		++min;
	}
	if (ctr == len)
		printf("OK!\n");
	else
		printf("FAIL!\n");
}

int	main()
{
	int	*tab;

	printf("\n\n### Test 1:\n");	
	tab = ft_range(0, 5);
	print_tab(tab, 0, 5);
	free(tab);
	printf("\n\n### Test 2:\n");	
	tab = ft_range(-5, 5);
	print_tab(tab, -5, 5);
	free(tab);
	printf("\n\n### Test 3:\n");	
	tab = ft_range(-1, 1);
	print_tab(tab, -1, 1);
	free(tab);
	printf("\n\n### Test 4:\n");	
	tab = ft_range(0, 0);
	print_tab(tab, 0, 0);
	printf("\n\n### Test 5:\n");	
	tab = ft_range(5, -5);
	print_tab(tab, 5, -5);
	printf("\n\n### Test 6:\n");	
	tab = ft_range(-1, 2147483647);
	test(tab, -1, 2147483647);
	free(tab);
}

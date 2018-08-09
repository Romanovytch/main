/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flgivern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 22:53:19 by flgivern          #+#    #+#             */
/*   Updated: 2018/08/06 16:19:44 by flgivern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max);

void	print_tab(int *tab, int min, int max, int nb)
{
	int	i;
	int	len;

	i = 0;
	printf("Min : %d, Max : %d, Return : %d\n", min, max, nb);
	len = max - min;
	if (tab == NULL)
		printf("Tab is NULL\n");
	while (i < len)
	{
		printf("Tab[%d] : %d\n", i, tab[i]);
		++i;
	}
}

void	test(int *tab, int min, int max, int nb)
{
	unsigned int	i;
	unsigned int	len;
	unsigned int	ctr;

	i = 0;
	ctr = 0;
	len = max - min;
	printf("Min : %d, Max : %d, Return : %d\n", min, max, nb);
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
	int	nb;

	printf("\n\n### Test 1:\n");	
	nb = ft_ultimate_range(&tab, 0, 5);
	print_tab(tab, 0, 5, nb);
	free(tab);
	printf("\n\n### Test 2:\n");	
	nb = ft_ultimate_range(&tab, -5, 5);
	print_tab(tab, -5, 5, nb);
	free(tab);
	printf("\n\n### Test 3:\n");	
	nb = ft_ultimate_range(&tab, -1, 1);
	print_tab(tab, -1, 1, nb);
	free(tab);
	printf("\n\n### Test 4:\n");	
	nb = ft_ultimate_range(&tab, 0, 0);
	print_tab(tab, 0, 0, nb);
	printf("\n\n### Test 5:\n");	
	nb = ft_ultimate_range(&tab, 5, -5);
	print_tab(tab, 5, -5, nb);
	printf("\n\n### Test 6:\n");	
	nb = ft_ultimate_range(&tab, 0, 2147483647);
	test(tab, 0, 2147483647, nb);
	free(tab);
}

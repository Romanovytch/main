/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flgivern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 11:38:05 by flgivern          #+#    #+#             */
/*   Updated: 2018/08/01 18:12:37 by flgivern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_sort_integer_table(int *tab, int size);

void	print_table(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		printf("%d ", tab[i]);
		++i;
	}
	printf("\n");
}

int	main()
{	
	int	*test;
	int	*test2;
	int	*test3;
	int	*test4;


	test = malloc(sizeof(int) * 14);
	test[0] = 5;
	test[1] = 0;
	test[2] = 7;
	test[3] = 1563;
	test[4] = 4;
	test[5] = -1;
	test[6] = 45;
	test[7] = 746531;
	test[8] = 1;
	test[9] = 5256;
	test[10] = 356;
	test[11] = -351;
	test[12] = 561;
	test[13] = 23;

	test2 = malloc(sizeof(int) * 14);
	test2[0] = 0;
	test2[1] = -351;
	test2[2] = 7;
	test2[3] = -351;
	test2[4] = 4;
	test2[5] = -1;
	test2[6] = 0;
	test2[7] = 746531;
	test2[8] = 0;
	test2[9] = 5256;
	test2[10] = 0;
	test2[11] = -351;
	test2[12] = 561;
	test2[13] = -351;

	test3 = malloc(sizeof(int) * 2);
	test3[0] = 1;
	test3[1] = -1;

	test4 = malloc(sizeof(int) * 1);
	test4[0] = 0;

	printf("Original : ");
	print_table(test, 14);
	ft_sort_integer_table(test, 14);
	printf("Sorted : ");
	print_table(test, 14);
	
	printf("Original : ");
	print_table(test2, 14);
	ft_sort_integer_table(test2, 14);
	printf("Sorted : ");
	print_table(test2, 14);
	
	printf("Original : ");
	print_table(test3, 2);
	ft_sort_integer_table(test3, 2);
	printf("Sorted : ");
	print_table(test3, 2);

	printf("Original : ");
	print_table(test4, 1);
	printf("Sorted : ");
	ft_sort_integer_table(test4, 1);
	print_table(test4, 1);
	
	free(test);
	free(test2);
	free(test3);
	free(test4);
	return (0);
}

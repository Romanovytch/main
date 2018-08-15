/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flgivern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 10:03:20 by flgivern          #+#    #+#             */
/*   Updated: 2018/08/09 12:16:13 by flgivern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_is_sort(int *tab, int length, int (*f)(int, int));

int	ft_cmp(int a, int b)
{
	if (a < b)
		return (-1);
	if (a == b)
		return (0);
	return (1);
}

int	main(int argc, char **argv)
{
	int	*tab;
	int	i;

	i = 1;
	tab = malloc((argc - 1) * sizeof(int));
	while (i < argc)
	{
		tab[i - 1] = atoi(argv[i]);
		++i;
	}
	printf("\n### Are int args sorted ?\n\n");
	printf("%d\n", ft_is_sort(tab, argc - 1, &ft_cmp));
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flgivern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 09:30:16 by flgivern          #+#    #+#             */
/*   Updated: 2018/08/09 09:43:33 by flgivern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int));

int	ft_add10(int a)
{
	printf("Adding 10 to %d.\n", a);
	return (a + 10);
}

int	main()
{
	int	tab[10] = {5, 10, 14, 17, 15, 16, 17, 10, 1, 0};
	int	*res;
	int	i;

	i = 0;
	printf("\n#### Applying ft_add10 on tab:\n\n");
	res = ft_map(tab, 10, &ft_add10);
	while (i < 10)
	{
		printf("tab[%d] = %d\n", i, res[i]);
		++i;
	}
	free(res);
}

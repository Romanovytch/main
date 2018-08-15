/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flgivern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 00:59:52 by flgivern          #+#    #+#             */
/*   Updated: 2018/08/15 17:57:33 by flgivern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"

void ft_list_push_back(t_list **begin_list, void *data);

int	main()
{
	t_list	*list;
	int		i;
	char	*tab[] = {"Petit", "Poney,", "Petit", "Poney,", "tu", "es", "tout", "gris", "et", "tout","petit", "petit", "Poney.", NULL};

	list = NULL;
	printf("#### Testing with an empty list :\n");
	printf("[Element at %d] data : %s (expected (null))\n", 0, (void *)ft_list_at(list, 0));
	printf("[Element at %d] data : %s (expected (null))\n", 1, (void *)ft_list_at(list, 1));
	printf("[Element at %d] data : %s (expected (null))\n", 2, (void *)ft_list_at(list, 2));
	printf("[Element at %d] data : %s (expected (null))\n", 3, (void *)ft_list_at(list, 3));
	i = 0;
	while (tab[i] != NULL)
		ft_list_push_back(&list, tab[i++]);
	i = 0;
	printf("#### Testing with a 13-length list :\n");
	while (i < 13)
	{
		printf("[Element at %d] data : %s (expected \"%s\")\n", i + 1, ft_list_at(list, i + 1)->data, tab[i]);
		++i;
	}
	printf("[Element at %d] data : %s (expected (null))\n", 14, (void *)ft_list_at(list, 14));
	printf("[Element at %d] data : %s (expected (null))\n", 15, (void *)ft_list_at(list, 15));
	return (0);
}

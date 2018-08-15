/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flgivern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 00:59:52 by flgivern          #+#    #+#             */
/*   Updated: 2018/08/15 18:45:14 by flgivern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "ft_list.h"

void ft_list_push_back(t_list **begin_list, void *data);

int	cmp(int a, int data_ref)
{
	return (a - data_ref);
}

int	main()
{
	t_list	*list;
	t_list	*list2;
	int		i;
	char	*tab[] = {"Comment", "est", "votre", "blanquette", "?", NULL};
	int		nbtab[] = {-154463, 13, 4213, 354561, 35152121, 89651220, 2010510000, 42};
	
	list = NULL;
	list2 = NULL;
	i = 0;
	printf("\n#### List :\n");
	while (tab[i] != NULL)
		printf("%s ", tab[i++]);
	printf("\n\n#### Finding \"blanquette\" : \n");
	i = 0;
	while (tab[i] != NULL)
		ft_list_push_back(&list, tab[i++]);
	printf("%s\n", ft_list_find(list, "blanquette", &strcmp)->data);
	i = 0;
	printf("\n#### List :\n");
	while (i < 8)
		printf("%d ", nbtab[i++]);
	printf("\n\n#### Finding 89651220 : \n");
	i = 0;
	while (i < 8)
		ft_list_push_back(&list, (void *)(size_t)nbtab[i++]);
	printf("%d\n", (int)ft_list_find(list, (void*)89651220, &cmp)->data);

	return (0);
}

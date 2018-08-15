/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flgivern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 00:59:52 by flgivern          #+#    #+#             */
/*   Updated: 2018/08/15 19:09:38 by flgivern         ###   ########.fr       */
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
	t_list	*tmp;
	int		i;
	char	*tab[] = {"Comment", "est", "votre", "blanquette", "?", NULL};
	int		nbtab[] = {0, -154463, 13, 42, 4213, 354561, 35152121, 42, 89651220, 2010510000, 42};
	
	list = NULL;
	list2 = NULL;
	i = 0;
	printf("\n#### EMPTY List :");
	printf("\n\n#### Sorting...\n");
	ft_list_sort(&list, &strcmp);
	printf("(expected 0x0) : %p\n", list);
	printf("\n#### List :\n");
	while (tab[i] != NULL)
		printf("%s ", tab[i++]);
	i = 0;
	while (tab[i] != NULL)
		ft_list_push_back(&list, tab[i++]);
	
	
	printf("\n\n#### Sorting...\n");
	ft_list_sort(&list, &strcmp);
	tmp = list;
	printf("\n#### List :\n");
	while (tmp != NULL)
	{
		printf("Data : %s\n", tmp->data);
		tmp = tmp->next;
	}

	i = 0;
	printf("\n#### List 2 :\n");
	while (i < 11)
		printf("%d ", nbtab[i++]);
	i = 0;
	while (i < 11)
		ft_list_push_back(&list2, (void *)(size_t)nbtab[i++]);
	
	printf("\n\n#### Sorting...\n");
	ft_list_sort(&list2, &cmp);
	tmp = list2;
	printf("\n#### List 2 :\n");
	while (tmp != NULL)
	{
		printf("Data : %d\n", (int)tmp->data);
		tmp = tmp->next;
	}
	return (0);
}

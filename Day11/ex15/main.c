/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flgivern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 00:59:52 by flgivern          #+#    #+#             */
/*   Updated: 2018/08/15 19:15:45 by flgivern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"

void ft_list_push_back(t_list **begin_list, void *data);
void ft_list_clear(t_list **begin_list);

int	main()
{
	t_list	*list;
	t_list	*tmp;
	int		i;
	char	*tab[] = {"wood ?", "chuck", "could", "woodchuck,", "a", "if", "chuck", "woodchuck", "a", "would","wood", "much", "How", NULL};

	list = NULL;
	printf("\n#### Reversed EMPTY list :\n");
	ft_list_reverse_fun(list);
	ft_list_push_back(&list, "Lonely node");
	printf("\n#### List (Size 1):\n");
	tmp = list;
	printf("[Node %d] data : \x1B[32m%s\x1B[0m (expected \"%s\")\n", 0, tmp->data, "Lonely node");
	printf("\n#### Reversed list (Size 1):\n");
	ft_list_reverse_fun(list);
	tmp = list;
	printf("[Node %d] data : \x1B[32m%s\x1B[0m (expected \"%s\")\n", 0, tmp->data, "Lonely node");
	
	ft_list_push_back(&list, "Tho not so lonely");
	
	printf("\n#### List (Size 2):\n");
	tmp = list;
	printf("[Node %d] data : \x1B[32m%s\x1B[0m (expected \"%s\")\n", 0, tmp->data, "Lonely node");
	tmp = tmp->next;
	printf("[Node %d] data : \x1B[32m%s\x1B[0m (expected \"%s\")\n", 1, tmp->data, "Tho not so lonely");
	printf("\n#### Reversed list (Size 2):\n");
	ft_list_reverse_fun(list);
	tmp = list;
	printf("[Node %d] data : \x1B[32m%s\x1B[0m (expected \"%s\")\n", 0, tmp->data, "Tho not so lonely");
	tmp = tmp->next;
	printf("[Node %d] data : \x1B[32m%s\x1B[0m (expected \"%s\")\n", 1, tmp->data, "Lonely node");

	ft_list_clear(&list);	
	printf("\n#### List :\n");
	i = 0;
	while (tab[i] != NULL)
		ft_list_push_back(&list, tab[i++]);
	i = 0;
	tmp = list;
	while (tab[i] != NULL)
	{
		printf("[Node %d] data : \x1B[32m%s\x1B[0m (expected \"%s\")\n", i, tmp->data, tab[i]);
		tmp = tmp->next;
		++i;
	}
	printf("\n#### Reversed list :\n");
	ft_list_reverse_fun(list);
	tmp = list;
	i = 0;
	while (tab[i] != NULL)
		++i;
	--i;
	while (i >= 0)
	{
		printf("[Node %d] data : \x1B[32m%s\x1B[0m (expected \"%s\")\n", 12 - i, tmp->data, tab[i]);
		tmp = tmp->next;
		--i;
	}
	return (0);
}

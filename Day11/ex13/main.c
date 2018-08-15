/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flgivern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 00:59:52 by flgivern          #+#    #+#             */
/*   Updated: 2018/08/14 11:29:18 by flgivern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "ft_list.h"

void ft_list_push_back(t_list **begin_list, void *data);

int	main()
{
	t_list	*list;
	t_list	*list2;
	t_list	*tmp;
	int		i;
	char	*tab1[] = {"J'ai", "deguste", "son", "foie", NULL};
	char	*tab2[] = {"avec", "des", "feves", "au", "beurre", "et", "un", "excellent", "Chianti", NULL};

	list = NULL;
	i = 0;
	while (tab1[i] != NULL)
		ft_list_push_back(&list, tab1[i++]);
	i = 0;
	while (tab2[i] != NULL)
		ft_list_push_back(&list2, tab2[i++]);
	tmp = list;
	printf("\n#### List 1 :\n");
	while (tmp != NULL)
	{
		printf("%s\n", tmp->data);
		tmp = tmp->next;
	}
	tmp = list2;
	printf("\n#### List 2 :\n");
	while (tmp != NULL)
	{
		printf("%s\n", tmp->data);
		tmp = tmp->next;
	}
	printf("\n\n#### Merging lists : (expected 13 nodes)\n");
	ft_list_merge(&list, list2);
	tmp = list;
	while (tmp != NULL)
	{
		printf("%s\n", tmp->data);
		tmp = tmp->next;
	}
	return (0);
}

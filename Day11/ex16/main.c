/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flgivern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 00:59:52 by flgivern          #+#    #+#             */
/*   Updated: 2018/08/15 19:17:25 by flgivern         ###   ########.fr       */
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
	t_list	*null;
	t_list	*l1;
	t_list	*l2;
	t_list	*list;
	t_list	*list2;
	t_list	*tmp;
	int		i;
	char	*tab[] = {"0", "Bitch!", "Wtf", "la drogue cest mal", NULL};
	char	*str = "Only one node in this list.";	
	null = NULL;
	l1 = NULL;
	l2 = NULL;
	list = NULL;
	list2 = NULL;
	i = 0;
	
	/* CREATION DES LISTES */	

	ft_list_push_back(&l1, str);
	
	ft_list_push_back(&l2, "First node");
	ft_list_push_back(&l2, "Second node");
	
	i = 0;
	while (tab[i] != NULL)
		ft_list_push_back(&list, tab[i++]);
	
	/* AFFICHAGE DES LISTES */

	printf("\n#### Lists :\n");
	printf("## Empty list :\n");
	i = 0;
	tmp = null;
	while (tmp != NULL)
	{
		printf("[Node %d] containing data : %s\n", i, tmp->data);
		tmp = tmp->next;
		++i;
	}

	printf("## 1-node list :\n");	
	i = 0;
	tmp = l1;
	while (tmp != NULL)
	{
		printf("[Node %d] containing data : %s\n", i, tmp->data);
		tmp = tmp->next;
		++i;
	}
	
	printf("## 2-nodes list :\n");
	i = 0;
	tmp = l2;
	while (tmp != NULL)
	{
		printf("[Node %d] containing data : %s\n", i, tmp->data);
		tmp = tmp->next;
		++i;
	}

	printf("## n-nodes list :\n");
	i = 0;
	tmp = list;
	while (tmp != NULL)
	{
		printf("[Node %d] containing data : %s\n", i, tmp->data);
		tmp = tmp->next;
		++i;
	}

	/* UTILISATION FONCTION */


	ft_sorted_list_insert(&null, "I'm not empty anymore, BITCH!", &strcmp);
	ft_sorted_list_insert(&l1, "but nope ! Now there's two.", &strcmp);
	ft_sorted_list_insert(&l2, "A node before the first one.", &strcmp);
	ft_sorted_list_insert(&l2, "A node right after the one before the first one.", &strcmp);
	ft_sorted_list_insert(&l2, "Ze last node.", &strcmp);
	ft_sorted_list_insert(&list, "bItCh!", &strcmp);
	ft_sorted_list_insert(&list, "BITCH!", &strcmp);
	ft_sorted_list_insert(&list, "WtF", &strcmp);
	ft_sorted_list_insert(&list, "WTF", &strcmp);
	ft_sorted_list_insert(&list, "La DrOgUe CeSt MaL", &strcmp);
	ft_sorted_list_insert(&list, "LA DROGUE CEST MAL", &strcmp);
	ft_sorted_list_insert(&list, "0+0=0", &strcmp);
	ft_sorted_list_insert(&list, "lA dRoGuE cEsT mAl", &strcmp);
	ft_sorted_list_insert(&list, "0 + 0 = 0", &strcmp);

	/* AFFICHAGE DES LISTES */

	printf("\n#### Lists :\n");
	printf("## Empty list :\n");
	i = 0;
	tmp = null;
	while (tmp != NULL)
	{
		printf("[Node %d] containing data : %s\n", i, tmp->data);
		tmp = tmp->next;
		++i;
	}

	printf("## 1-node list :\n");	
	i = 0;
	tmp = l1;
	while (tmp != NULL)
	{
		printf("[Node %d] containing data : %s\n", i, tmp->data);
		tmp = tmp->next;
		++i;
	}
	
	printf("## 2-nodes list :\n");
	i = 0;
	tmp = l2;
	while (tmp != NULL)
	{
		printf("[Node %d] containing data : %s\n", i, tmp->data);
		tmp = tmp->next;
		++i;
	}

	printf("## n-nodes list :\n");
	i = 0;
	tmp = list;
	while (tmp != NULL)
	{
		printf("[Node %d] containing data : %s\n", i, tmp->data);
		tmp = tmp->next;
		++i;
	}

	return (0);
}

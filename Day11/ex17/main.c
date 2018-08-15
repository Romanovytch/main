/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flgivern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 00:59:52 by flgivern          #+#    #+#             */
/*   Updated: 2018/08/15 19:32:16 by flgivern         ###   ########.fr       */
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
	t_list	*l3;
	t_list	*tmp;
	t_list	*null_2;
	t_list	*l1_2;
	t_list	*l2_2;
	t_list	*l3_2;
	int		i;
	char	*tab[] = {"0", "Bitch!", "Wtf", "la drogue cest mal", NULL};
	int		nbtab[] = {-154463, 13, 4213, 354561, 35152121, 89651220, 2010510000, 42};
	null = NULL;
	null_2 = NULL;
	l1 = NULL;
	l1_2 = NULL;
	l2 = NULL;
	l2_2 = NULL;
	l3 = NULL;
	l3_2 = NULL;
	i = 0;
	
	/* CREATION DES LISTES */	

	ft_list_push_back(&null_2, "I'm not empty anymore, BITCH!");

	ft_list_push_back(&l1, "Only one node in this list.");
	
	ft_list_push_back(&l1_2, "but nope ! Now there's two.");
	
	ft_list_push_back(&l2, "First node");
	ft_list_push_back(&l2, "Second node");
	
	ft_list_push_back(&l2_2, "A node before the first one.");
	ft_list_push_back(&l2_2, "A node right after the one before the first one.");
	ft_list_push_back(&l2_2, "Ze last node.");	

	i = 0;
	while (tab[i] != NULL)
		ft_list_push_back(&l3, tab[i++]);
	
	ft_list_push_back(&l3_2, "0 + 0 = 0");
	ft_list_push_back(&l3_2, "0+0=0");
	ft_list_push_back(&l3_2, "BITCH!");	
	ft_list_push_back(&l3_2, "LA DROGUE CEST MAL");
	ft_list_push_back(&l3_2, "La DrOgUe CeSt MaL");
	ft_list_push_back(&l3_2, "WTF");	
	ft_list_push_back(&l3_2, "WtF");
	ft_list_push_back(&l3_2, "bItCh!");
	ft_list_push_back(&l3_2, "lA dRoGuE cEsT mAl");	

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
	tmp = l3;
	while (tmp != NULL)
	{
		printf("[Node %d] containing data : %s\n", i, tmp->data);
		tmp = tmp->next;
		++i;
	}

	/* UTILISATION FONCTION */

	ft_sorted_list_merge(&null, null_2, &strcmp);
	ft_sorted_list_merge(&l1, l1_2, &strcmp);
	ft_sorted_list_merge(&l2, l2_2, &strcmp);
	ft_sorted_list_merge(&l3, l3_2, &strcmp);

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
	tmp = l3;
	while (tmp != NULL)
	{
		printf("[Node %d] containing data : %s\n", i, tmp->data);
		tmp = tmp->next;
		++i;
	}

	return (0);
}

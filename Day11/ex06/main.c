/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flgivern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 00:59:52 by flgivern          #+#    #+#             */
/*   Updated: 2018/08/15 17:53:34 by flgivern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"

void ft_list_push_back(t_list **begin_list, void *data);

int	main()
{
	t_list	*list;
	t_list	*tmp;
	int		i;
	char	*tab[] = {"Vous", "savez", "moi", "je", "ne", "croit", "pas", "qu'il", "y", "ait","de", "bonne", "ou", "de", "mauvaises", "situations", NULL};

	list = NULL;
	printf("Clearing EMPTY list with ft_list_clear...\n");
	ft_list_clear(&list);
	printf("List : %s\n", (void*)list);
		
	ft_list_push_back(&list, "(TBARTHEL > LGILLETT) ? 1 : 0");
	tmp = list;
	printf("[Node 0] data : %s (expected \"%s\")\n", tmp->data, "(TBARTHEL > LGILLETT) ? 1 : 0");
	printf("Clearing list with ft_list_clear...\n");
	ft_list_clear(&list);
	printf("List : %s\n", (void*)list);
	
		i = 0;
	while (tab[i] != NULL)
		ft_list_push_back(&list, tab[i++]);
	tmp = list;
	i = 0;
	while (tmp != NULL)
	{
		printf("[Node %d] data : %s (expected \"%s\")\n", i, tmp->data, tab[i]);
		tmp = tmp->next;
		++i;
	}

	printf("Clearing list with ft_list_clear...\n");
	ft_list_clear(&list);


	printf("List : %s\n", (void*)list);
	return (0);
}

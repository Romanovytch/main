/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flgivern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 00:59:52 by flgivern          #+#    #+#             */
/*   Updated: 2018/08/14 11:08:46 by flgivern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "ft_list.h"

void ft_list_push_back(t_list **begin_list, void *data);

int	main()
{
	t_list	*list;
	t_list	*tmp;
	int		i;
	char	*tab[] = {"Is", "this", "koala", "looking", "at", "my", "koala", "like", "no", "koala","would", "ever", "koala", NULL};

	list = NULL;
	i = 0;
	while (tab[i] != NULL)
		ft_list_push_back(&list, tab[i++]);
	printf("\n#### List :\n");
	i = 0;
	tmp = list;
	while (tmp != NULL)
	{
		printf("%s\n", tmp->data);
		tmp = tmp->next;
	}
	printf("\n\n#### Removing node in list if \"koala\" : (expected 9 left)\n");
	ft_list_remove_if(&list, "koala", &strcmp);
	tmp = list;
	while (tmp != NULL)
	{
		printf("%s\n", tmp->data);
		tmp = tmp->next;
	}
	return (0);
}

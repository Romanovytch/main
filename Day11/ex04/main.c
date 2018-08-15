/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flgivern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 00:59:52 by flgivern          #+#    #+#             */
/*   Updated: 2018/08/15 17:30:12 by flgivern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"

void ft_list_push_back(t_list **begin_list, void *data);

int	main()
{
	t_list	*list;
	int		i;
	char	*tab[] = {"Vous", "savez", "moi", "je", "ne", "croit", "pas", "qu'il", "y", "ait","de", "bonne", "ou", "de", "mauvaises", "situations", NULL};

	list = NULL;
	i = 0;
	printf("Last element of NULL list : %s\n", (void*)ft_list_last(list));
	ft_list_push_back(&list, "Vous");
	printf("Last element of list (expected \"Vous\") : %s\n", ft_list_last(list)->data);
	while (tab[i] != NULL)
		ft_list_push_back(&list, tab[i++]);
	printf("Last element of list (expected \"situations\") : %s\n", ft_list_last(list)->data);
	return (0);
}

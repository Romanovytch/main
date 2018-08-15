/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flgivern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 00:59:52 by flgivern          #+#    #+#             */
/*   Updated: 2018/08/15 17:12:57 by flgivern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"

int	main()
{
	t_list	*list;
	t_list	*tmp;
	int		i;
	char	*tab[] = {"Vous", "savez", "moi", "je", "ne", "croit", "pas", "qu'il", "y", "ait","de", "bonnes", "ou", "de", "mauvaises", "situations", NULL};

	list = NULL;
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
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flgivern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 00:59:52 by flgivern          #+#    #+#             */
/*   Updated: 2018/08/13 02:43:39 by flgivern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		++i;
	return (i);
}

int	main()
{
	t_list	*list;
	t_list	*tmp;
	int		i;
	char	*tab[] = {"Hello...", "It's me...", "I've been wondering", "if after all", "these years you'd", "like to meet", "HEELLLOOOOO FROM THE OTHERSIIIIIDE", "I MUST HAVE CALLED A THOUSAND TIIIIMES", NULL};

	list = NULL;
	i = 0;
	while (tab[i] != NULL)
		++i;
	--i;
	while (i >= 0)
		ft_list_push_front(&list, tab[i--]);
	tmp = list;
	i = 0;
	while (tmp != NULL)
	{
		printf("[Node %d] data : %s (expected \"%s\")\n", i, tmp->data, tab[i]);
		tmp = tmp->next;
		i++;
	}
	return (0);
}

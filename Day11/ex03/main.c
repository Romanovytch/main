/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flgivern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 00:59:52 by flgivern          #+#    #+#             */
/*   Updated: 2018/08/15 17:23:21 by flgivern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"

void ft_list_push_front(t_list **begin_list, void *data);

int	main()
{
	t_list	*list;
	int		i;
	char	*tab[] = {"Hello...", "It's me...", "I've been wondering", "if after all", "these years you'd", "like to meet", "HEELLLOOOOO FROM THE OTHERSIIIIIDE", "I MUST HAVE CALLED A THOUSAND TIIIIMES", NULL};

	list = NULL;
	i = 0;
	printf("Size of list with 0 elements : %d\n", ft_list_size(list));
	ft_list_push_front(&list, "Hello...");	
	printf("Size of list with 1 elements : %d\n", ft_list_size(list));
	while (tab[i] != NULL)
		ft_list_push_front(&list, tab[i++]);
	printf("Size of list with 8 elements : %d\n", ft_list_size(list));
	return (0);
}

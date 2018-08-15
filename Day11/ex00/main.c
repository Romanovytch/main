/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flgivern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 16:55:06 by flgivern          #+#    #+#             */
/*   Updated: 2018/08/15 17:08:49 by flgivern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"

int	main()
{

	t_list	*elem;
	t_list	*elem2;
	t_list	*elem3;
	char	*str = "Bonjour";
	int		nb = 42;

	elem = ft_create_elem(str);
	elem2 = ft_create_elem((void*)(size_t)nb);
	elem3 = ft_create_elem(NULL);
	printf("[Elem 1] Data : %s (expected \"Bonjour\")\n", elem->data);
	printf("[Elem 2] Data : %d (expected 42)\n", (int)elem2->data);
	printf("[Elem 3] Data : %p (expected 0x0)\n", elem3->data);
	printf("\nChecking that next points to NULL...\n");
	if (elem->next == NULL && elem2->next == NULL && elem3->next == NULL)
		printf("Ok!\n");
	else
		printf("Fail :(\n");
	free(elem);
	free(elem2);
	return (0);
}

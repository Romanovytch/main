/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flgivern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 00:59:52 by flgivern          #+#    #+#             */
/*   Updated: 2018/08/15 18:35:29 by flgivern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <time.h>
#include <string.h>
#include "ft_list.h"

void ft_list_push_back(t_list **begin_list, void *data);

void	print_data(void	*data)
{
	int	rd = rand() % 4;

	if (rd == 0)	
		printf("A RED koala was detected : \x1B[31m%s\x1B[0m\n", data);
	else if (rd == 1)	
		printf("A GREEN koala was detected : \x1B[32m%s\x1B[0m\n", data);
	else if (rd == 2)	
		printf("A YELLOW koala was detected : \x1B[33m%s\x1B[0m\n", data);
	else
		printf("A BLUE koala was detected : \x1B[34m%s\x1B[0m\n", data);
}

int	main()
{
	t_list	*list;
	int		i;
	char	*tab[] = {"Is", "this", "koala", "looking", "at", "my", "koala", "like", "no", "koala","would", "ever", "koala", NULL};

	list = NULL;
	srand(time(NULL));
	i = 0;
	printf("\n#### List :\n");
	while (tab[i] != NULL)
		printf("%s ", tab[i++]);
	printf("\n\n#### Applying function on List if \"koala\" : (expected 4 elements)\n");
	i = 0;
	while (tab[i] != NULL)
		ft_list_push_back(&list, tab[i++]);
	ft_list_foreach_if(list, &print_data, "koala", &strcmp);
	return (0);
}

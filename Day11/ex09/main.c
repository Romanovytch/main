/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flgivern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 00:59:52 by flgivern          #+#    #+#             */
/*   Updated: 2018/08/15 18:31:02 by flgivern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"

void ft_list_push_back(t_list **begin_list, void *data);

void	print_data(void	*data)
{	
	printf("Function displaying data IN CYAN BCUZ ITS FUCKING GREAT MAAAAAAN: \x1B[36m%s\x1B[0m\n", data);
}

int	main()
{
	t_list	*list;
	int		i;
	char	*tab[] = {"Hey!", "Look", "at", "my", "new", "dog.", "But?", "Ther's", "no", "dog","there!", "OOOOOOOOH LOL LOLOL", "ROOOFL LMAO KRKRKKRKRKK", NULL};

	list = NULL;
	printf("\n#### Applying function on List : (expected 13 elements)\n");
	i = 0;
	while (tab[i] != NULL)
		ft_list_push_back(&list, tab[i++]);
	ft_list_foreach(list, &print_data);
	return (0);
}

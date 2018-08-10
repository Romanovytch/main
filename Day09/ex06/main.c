/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flgivern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 22:58:58 by flgivern          #+#    #+#             */
/*   Updated: 2018/08/09 23:20:26 by flgivern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

void	ft_destroy(char ***factory);

int	main()
{
	char	***factory;
	int		i;
	int		j;

	i = 0;
	factory = (char ***)malloc(sizeof(char **) * 5);
	while (i < 4)
	{
		j = 0;
		factory[i] = (char **)malloc(sizeof(char *) * 10);
		while (j < 9)
		{
			factory[i][j] = strdup("LOL");
			++j;
		}
		factory[i][j] = NULL;
		++i;
	}
	factory[i] = NULL;
	ft_destroy(factory);
	return (0);	
}

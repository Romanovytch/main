/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flgivern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 09:27:37 by flgivern          #+#    #+#             */
/*   Updated: 2018/08/10 09:39:25 by flgivern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int	ft_compact(char **tab, int length);

int	main()
{
	char	**tab;
	int		i;

	i = 0;
	tab = malloc(sizeof(char *) * 2);
	tab[0] = NULL;
	tab[1] = NULL;
	printf("%d\n", ft_compact(tab, 2));
	while (i < 2)
	{
		printf("%s\n", tab[i]);
		++i;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flgivern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 09:27:37 by flgivern          #+#    #+#             */
/*   Updated: 2018/08/10 13:01:26 by lgillett         ###   ########.fr       */
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
	tab = malloc(sizeof(char *) * 12);
	tab[0] = NULL;
	tab[1] = NULL;
	tab[2] = strdup("hello");;
	tab[3] = NULL;
	tab[4] = NULL;
	tab[5] = strdup("Its me");
	tab[6] = strdup("Ive been wondering");
	tab[7] = NULL;
	tab[8] = NULL;
	tab[9] = strdup("if after all these years");
	tab[10] = NULL;
	tab[11] = NULL;
	printf("Retour (expected 4) : %d\n", ft_compact(tab, 12));
	while (i < 12)
	{
		printf("tab[%d] : %d, %s\n", i, tab[i]);
		++i;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flgivern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 10:21:48 by flgivern          #+#    #+#             */
/*   Updated: 2018/08/10 13:01:39 by lgillett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_perso.h"

t_perso **ft_decrypt(char *str);

int	main()
{
	t_perso	**tab;
	int		i;

	i = 0;
	tab = ft_decrypt("15|Nick");
	while (tab[i] != NULL)
	{
		printf("tab[%d] : Age = %d | Nom = %s\n", i, tab[i]->age, tab[i]->name);
		++i;
	}
}

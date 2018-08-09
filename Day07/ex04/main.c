/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flgivern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 19:32:09 by flgivern          #+#    #+#             */
/*   Updated: 2018/08/09 11:21:54 by flgivern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	**ft_split_whitespaces(char *str);

void	print_tab(char **tab, int nb)
{
	int	i;

	i = 0;
	printf("[expected %d words]\n", nb);
	while (tab[i] != 0)
	{
		printf("Mot %d : \"%s\"\n", i + 1, tab[i]);
		++i;
	}
}

int		main()
{
	char	**tab;

	printf("\n### Splitting \"Bonjour\"\n");
	tab = ft_split_whitespaces("Bonjour");
	print_tab(tab, 1);
	printf("\n### Splitting \"  \\t\\n Il \\t y \\n a \\t \\t 5 \\n mots \\n\\n \\t\"\n");
	tab = ft_split_whitespaces("  \t\n Il \t y \n a \t \t 5 \n mots \n\n \t  ");	
	print_tab(tab, 5);
	printf("\n### Splitting \"k\\tarbgk l4 5 426 + 6\\n6ef $^ &WE(IDW J 08dywq-\\t3nr    nr350-m  b\"\n");
	tab = ft_split_whitespaces("k\tarbgk l4 5 426 + 6\n6ef $^ &WE(IDW J 08dywq-\t3nr    nr350-m  b");	
	print_tab(tab, 15);
	printf("\n### Splitting \" test\"\n");
	tab = ft_split_whitespaces(" test");	
	print_tab(tab, 1);
	printf("\n### Splitting \"test\\n\"\n");
	tab = ft_split_whitespaces("test\n");	
	print_tab(tab, 1);
	printf("\n### Splitting \"0\"\n");
	tab = ft_split_whitespaces("0");
	print_tab(tab, 1);
	printf("\n### Splitting \"\"\n");
	tab = ft_split_whitespaces("");
	print_tab(tab, 0);
	return (0);
}

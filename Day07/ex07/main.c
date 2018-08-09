/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flgivern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 19:32:09 by flgivern          #+#    #+#             */
/*   Updated: 2018/08/09 11:22:35 by flgivern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	**ft_split(char *str, char *charset);

void	print_tab(char **tab, int nb, char *charset)
{
	int	i;

	i = 0;
	printf("[%d words expected]\n", nb);
	while (tab[i] != 0)
	{
		printf("Mot %d : \"%s\"\n", i + 1, tab[i]);
		++i;
	}
}

int		main()
{
	char	**tab;
	char	*str = "Bonjour";
	char	*sep = "";
	char	*str2 = "  \t\n Il \t y \n a \t \t 5 \n mots \n\n \t";
	char	*sep2 = "\t\n ";
	char	*str2a = "  \\t\\n Il \\t y \\n a \\t \\t 5 \\n mots \\n\\n \\t";
	char	*sep2a = "\\t\\n ";
	char	*str3 = "k0arbgkl45c426+66ef$^&WE(IDWJ08dywq-03nr8nr350-m b1";
	char	*sep3 = "0123456789";
	char	*str4 = "test";
	char	*sep4 = "test";

	printf("\n### Splitting \"%s\" with separators \"%s\"\n", str, sep);
	tab = ft_split("Bonjour", "");
	print_tab(tab, 1, "");
	printf("\n### Splitting \"%s\" with separators \"%s\"\n", str2a, sep2a);
	tab = ft_split("  \t\n Il \t y \n a \t \t 5 \n mots \n\n \t  ", " \t\n");	
	print_tab(tab, 5, " \\t\\n");
	printf("\n### Splitting \"%s\" with separators \"%s\"\n", str3, sep3);
	tab = ft_split("k0arbgkl45c426+66ef$^&WE(IDWJ08dywq-03nr8nr350-m b1", "0123456789");	
	print_tab(tab, 9, "0123456789");
	printf("\n### Splitting \"%s\" with separators \"%s\"\n", str4, sep4);
	tab = ft_split("test", "test");	
	print_tab(tab, 0, "test");	
	return (0);
}

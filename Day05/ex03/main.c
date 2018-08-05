/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flgivern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 01:13:01 by flgivern          #+#    #+#             */
/*   Updated: 2018/08/04 16:43:24 by flgivern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char	*ft_strcpy(char *src, char *dest);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		++i;
	return (i);
}

int	main()
{
	char	*src = "Chaine a copier";
	char	*dest;
	char	*src2 = "Test";
	char	*dest2;
	char	*src3 = "OMG";
	char	*dest3;
	
	
	dest = malloc((ft_strlen(src) + 1) * sizeof(char));
	dest2 = malloc((26 + 1) * sizeof(char));
	dest3 = malloc(1 * sizeof(char));
	dest2 = strcpy(dest2, "abcdefghijklmnopqrstuvwxyz");
	printf("### YOUR STRCPY :\n");	
	
	printf("Source : %s\n", src);
	printf("Copie : %s\n", ft_strcpy(dest, src));
	
	printf("Source : %s | Dest : %s\n", src2, dest2);
	printf("Copie : %s\n", ft_strcpy(dest2, src2));
	
	printf("Source : %s\n", src3);
	printf("Copie : %s\n", ft_strcpy(dest3, src3));
	
	dest2 = strcpy(dest2, "abcdefghijklmnopqrstuvwxyz");

	printf("### REAL STRCPY :\n");	
	printf("Source : %s\n", src);
	printf("Copie : %s\n", strcpy(dest, src));
	
	printf("Source : %s | Dest : %s\n", src2, dest2);
	printf("Copie : %s\n", strcpy(dest2, src2));
	
	printf("Source : %s\n", src3);
	printf("Copie : %s\n", strcpy(dest3, src3));

	free(dest);
	free(dest2);
	free(dest3);
	return (0);
}

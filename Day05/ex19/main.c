/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flgivern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 01:13:01 by flgivern          #+#    #+#             */
/*   Updated: 2018/08/04 19:59:03 by flgivern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

unsigned int	ft_strlcpy(char *src, char *dest, unsigned int n);

int	main()
{
	char	*src = "Chaine a copier.";
	char	*dest;
	char	*src2 = "Test";
	char	*dest2;
	char	*src3 = "OMG";
	char	*dest3;

	dest = malloc((16 + 10) * sizeof(char));
	dest2 = malloc((26 + 1) * sizeof(char));
	dest3 = malloc(10 * sizeof(char));
	dest2 = strcpy(dest2, "abcdefghijklmnopqrstuvwxyz");
	printf("### YOUR STRLCPY :\n");	
	
	printf("Source : %s\n", src);
	printf("Copie n=6 : \"%s\", return : %d\n", dest, ft_strlcpy(dest, src, 16));
	
	printf("Source : %s | Dest = %s\n", src2, dest2);
	printf("Copie n=2 : %s, return : %d\n", dest2, ft_strlcpy(dest2, src2, 2));
	
	printf("Source : %s\n", src3);
	printf("Copie n=10 : %s, return : %d\n", dest3, ft_strlcpy(dest3, src3, 10));
	
	dest2 = strcpy(dest2, "abcdefghijklmnopqrstuvwxyz");
	printf("### REAL STRCPY :\n");	
	
	printf("Source : %s\n", src);
	printf("Copie n=6 : \"%s\", return : %lu\n", dest, strlcpy(dest, src, 16));
	
	printf("Source : %s | Dest = %s\n", src2, dest2);
	printf("Copie n=2 : %s, return : %lu\n", dest2, strlcpy(dest2, src2, 2));
	
	printf("Source : %s\n", src3);
	printf("Copie n=10 : %s, return : %lu\n", dest3, strlcpy(dest3, src3, 10));

	free(dest);
	free(dest2);
	free(dest3);
	return (0);
}

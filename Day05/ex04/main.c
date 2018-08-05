/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flgivern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 01:13:01 by flgivern          #+#    #+#             */
/*   Updated: 2018/08/04 17:57:22 by flgivern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		++i;
	return (i);
}

void	ft_putnstr(char *str, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (str[i] == '\0')
		{
			write(1, "\\", 1);
			write(1, "0", 1);
		}
		else
			write(1, &str[i], 1);
		++i;
	}
	write(1, "\n", 1);
}

int	main()
{
	char	*src = "Chaine a copier";
	char	*dest;
	char	*src2 = "Test";
	char	*dest2;
	char	*src3 = "OMG";
	char	*dest3;
	char	*dest4;

	dest = malloc((ft_strlen(src) + 10) * sizeof(char));
	dest2 = malloc((26 + 1) * sizeof(char));
	dest3 = malloc(1 * sizeof(char));
	dest4 = malloc(6 * sizeof(char));
	dest2 = strcpy(dest2, "abcdefghijklmnopqrstuvwxyz");
	printf("### YOUR STRCPY :\n");	
	
	printf("Source : %s\n", src);
	printf("Copie n=(len+10) : \n");
	ft_putnstr(ft_strncpy(dest, src, 26), 26);
	
	printf("Source : %s | Dest = %s\n", src2, dest2);
	printf("Copie n=2 : %s\n", ft_strncpy(dest2, src2, 2));
	
	printf("Source : %s\n", src3);
	printf("Copie : %s\n", ft_strncpy(dest3, src3, 4));
	
	printf("Source : %s\n", "abcdefgh");
	printf("Copie : %s\n", ft_strncpy(dest4, "abcdefgh", sizeof(dest4)));
	
	dest2 = strcpy(dest2, "abcdefghijklmnopqrstuvwxyz");
	printf("### REAL STRCPY :\n");	
	
	printf("Source : %s\n", src);
	printf("Copie n=(len+10) : \n");
	ft_putnstr(strncpy(dest, src, 26), 26);
	
	printf("Source : %s | Dest = %s\n", src2, dest2);
	printf("Copie n=2 : %s\n", strncpy(dest2, src2, 2));
	
	printf("Source : %s\n", src3);
	printf("Copie : %s\n", strncpy(dest3, src3, 4));

	printf("Source : %s\n", "abcdefgh");
	printf("Copie : %s\n", strncpy(dest4, "abcdefgh", 6));
	
	free(dest);
	free(dest2);
	free(dest3);
	free(dest4);
	return (0);
}

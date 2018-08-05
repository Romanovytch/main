/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flgivern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/03 12:29:38 by flgivern          #+#    #+#             */
/*   Updated: 2018/08/04 20:34:25 by flgivern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main()
{
	char	*str;
	char	*str2 = " Game.";
	char	*str3 = " ducks are drinking a beer.";
	char	*str4 = strdup("A dog, three cats, an octopus on a unicorn and");

	str = malloc(sizeof(char) * 100);
	printf("\nYOUR STRLCAT :\n");
	str[0] = 'T';
	str[1] = 'h';
	str[2] = 'e';
	str[3] = '\0';
	printf("Strlcat of \"%s\" and \"%s\" size=10:\n", str, str2);
   	printf("=> \"%s\", return : %d\n", str, ft_strlcat(str, str2, 10));
	printf("Strlcat of \"%s\" and \"%s\" size=18:\n", str4, str3);
   	printf("=> \"%s\", return : %d\n", str4, ft_strlcat(str4, str3, 50));
	str[0] = 'T';
	str[1] = 'h';
	str[2] = 'e';
	str[3] = '\0';
	printf("Strlcat of \"%s\" and \"%s\" size=10:\n", str, str3);
  	printf("=> \"%s\", return : %d\n", str, ft_strlcat(str, str3, 10));
	str4 = strdup("A dog, three cats, an octopus on a unicorn and");
	printf("\nREAL STRLCAT :\n");
	str[0] = 'T';
	str[1] = 'h';
	str[2] = 'e';
	str[3] = '\0';
	printf("Strlcat of \"%s\" and \"%s\" size=10:\n", str, str2);
   	printf("=> \"%s\", return : %lu\n", str, strlcat(str, str2, 10));
	printf("Strlcat of \"%s\" and \"%s\" size=18:\n", str4, str3);
   	printf("=> \"%s\", return : %lu\n", str4, strlcat(str4, str3, 50));
	str[0] = 'T';
	str[1] = 'h';
	str[2] = 'e';
	str[3] = '\0';
	printf("Strlcat of \"%s\" and \"%s\" size=10:\n", str, str3);
  	printf("=> \"%s\", return : %lu\n", str, strlcat(str, str3, 10));
}

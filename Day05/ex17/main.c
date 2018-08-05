/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flgivern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/03 12:29:38 by flgivern          #+#    #+#             */
/*   Updated: 2018/08/04 19:40:15 by flgivern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strncat(char *dest, char *src, int nb);

int	main()
{
	char	*str;
	char	*str2 = " Game.";
	char	*str3 = " ducks are drinking a beer.";

	str = malloc(sizeof(char) * 100);
	str[0] = 'T';
	str[1] = 'h';
	str[2] = 'e';
	str[3] = '\0';
	printf("Strcat of \"%s\" and \"%s\" n=5:\n", str, str2);
   	printf("=> \"%s\"\n", ft_strncat(str, str2, 5));
	str[0] = 'T';
	str[1] = 'h';
	str[2] = 'e';
	str[3] = '\0';
	printf("Strcat of \"%s\" and \"%s\" n=40:\n", str, str3);
  	printf("=> \"%s\"\n", ft_strncat(str, str3, 40));
}

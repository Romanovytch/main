/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flgivern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/03 12:29:38 by flgivern          #+#    #+#             */
/*   Updated: 2018/08/04 19:36:29 by flgivern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strcat(char *dest, char *src);

int	main()
{
	char	*str;
	char	*str2 = " Game.";

	str = malloc(sizeof(char) * 100);
	str[0] = 'T';
	str[1] = 'h';
	str[2] = 'e';
	str[3] = '\0';
	printf("Strcat of \"%s\" and \"%s\" :\n", str, str2);
   	printf("=> \"%s\"\n", ft_strcat(str, str2));
	free(str);	
}

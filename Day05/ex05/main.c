/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flgivern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 16:02:22 by flgivern          #+#    #+#             */
/*   Updated: 2018/08/04 18:05:55 by flgivern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int	main()
{
	char	*str = "Bonjour je suis une licorne rose.";
	char	*f = "licorne";
	char	*f2 = "Bonjour j e";
	char	*f3 = ".";
	char	*f4 = "";
	char	*f5 = "Bonjour je suis une licorne rose.";

	printf("YOUR STRSTR\n");
	printf("Searching for \"%s\" in \"%s\" : \"%s\"\n", f, str, ft_strstr(str, f));
	printf("Searching for \"%s\" in \"%s\" : \"%s\"\n", f2, str, ft_strstr(str, f2));
	printf("Searching for \"%s\" in \"%s\" : \"%s\"\n", f3, str, ft_strstr(str, f3));
	printf("Searching for \"%s\" in \"%s\" : \"%s\"\n", f4, str, ft_strstr(str, f4));
	printf("Searching for \"%s\" in \"%s\" : \"%s\"\n", f5, str, ft_strstr(str, f5));
	printf("Searching for \"%s\" in \"%s\" : \"%s\"\n", str, f4, ft_strstr(f4, str));
	printf("Searching for \"%s\" in \"%s\" : \"%s\"\n", f4, f4, ft_strstr(f4, f4));
	printf("\nREAL STRSTR\n");
	printf("Searching for \"%s\" in \"%s\" : \"%s\"\n", f, str, strstr(str, f));
	printf("Searching for \"%s\" in \"%s\" : \"%s\"\n", f2, str, strstr(str, f2));
	printf("Searching for \"%s\" in \"%s\" : \"%s\"\n", f3, str, strstr(str, f3));
	printf("Searching for \"%s\" in \"%s\" : \"%s\"\n", f4, str, strstr(str, f4));
	printf("Searching for \"%s\" in \"%s\" : \"%s\"\n", f5, str, strstr(str, f5));
	printf("Searching for \"%s\" in \"%s\" : \"%s\"\n", f4, str, strstr(f4, str));
	printf("Searching for \"%s\" in \"%s\" : \"%s\"\n", f4, f4, strstr(f4, f4));
	return (0);
}

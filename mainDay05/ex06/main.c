/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flgivern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 13:14:34 by flgivern          #+#    #+#             */
/*   Updated: 2018/08/02 13:26:34 by flgivern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <strings.h>

int	ft_strcmp(char *s1, char *s2);

int	main()
{
	char *s1 = "Test de chaine de caractere";
	char *s2 = "Test de chaine de caractere";
	char *s3 = "Test de chaine de caracter";
	char *s4 = "Test de Chaine de caractere";
	char *s5 = "Test";
	char *s6 = "";
	char *s7 = " ";

	printf("Comparing \"%s\" and \"%s\" : %d\n", s1, s2, ft_strcmp(s1, s2));
	printf("Comparing \"%s\" and \"%s\" : %d\n", s1, s3, ft_strcmp(s1, s3));
	printf("Comparing \"%s\" and \"%s\" : %d\n", s3, s2, ft_strcmp(s3, s2));
	printf("Comparing \"%s\" and \"%s\" : %d\n", s4, s2, ft_strcmp(s4, s2));
	printf("Comparing \"%s\" and \"%s\" : %d\n", s5, s1, ft_strcmp(s5, s1));
	printf("Comparing \"%s\" and \"%s\" : %d\n", s1, s5, ft_strcmp(s1, s5));
	printf("Comparing \"%s\" and \"%s\" : %d\n", s6, s5, ft_strcmp(s6, s5));
	printf("Comparing \"%s\" and \"%s\" : %d\n", s7, s6, ft_strcmp(s7, s6));
	printf("Comparing \"%s\" and \"%s\" : %d\n", s6, s6, ft_strcmp(s6, s6));


	printf("\n### REAL STRCMP :\n");

	printf("Comparing \"%s\" and \"%s\" : %d\n", s1, s2, strcmp(s1, s2));
	printf("Comparing \"%s\" and \"%s\" : %d\n", s1, s3, strcmp(s1, s3));
	printf("Comparing \"%s\" and \"%s\" : %d\n", s3, s2, strcmp(s3, s2));
	printf("Comparing \"%s\" and \"%s\" : %d\n", s4, s2, strcmp(s4, s2));
	printf("Comparing \"%s\" and \"%s\" : %d\n", s5, s1, strcmp(s5, s1));
	printf("Comparing \"%s\" and \"%s\" : %d\n", s1, s5, strcmp(s1, s5));
	printf("Comparing \"%s\" and \"%s\" : %d\n", s6, s5, strcmp(s6, s5));
	printf("Comparing \"%s\" and \"%s\" : %d\n", s7, s6, strcmp(s7, s6));
	printf("Comparing \"%s\" and \"%s\" : %d\n", s6, s6, strcmp(s6, s6));
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flgivern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 13:14:34 by flgivern          #+#    #+#             */
/*   Updated: 2018/08/05 11:03:22 by flgivern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <strings.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main()
{
	char *s1 = "Test de chaine de caractere";
	char *s2 = "Test de chaine de caractere";
	char *s3 = "Test de chaine de caracter";
	char *s4 = "Test de Chaine de caractere";
	char *s5 = "Test";
	char *s6 = "";

	printf("Comparing \"%s\" and \"%s\" n=28 : %d\n", s1, s2, ft_strncmp(s1, s2, 28));
	printf("Comparing \"%s\" and \"%s\" n=28 : %d\n", s1, s3, ft_strncmp(s1, s3, 28));
	printf("Comparing \"%s\" and \"%s\" n=28 : %d\n", s3, s2, ft_strncmp(s3, s2, 28));
	printf("Comparing \"%s\" and \"%s\" n=15 : %d\n", s4, s2, ft_strncmp(s4, s2, 15));
	printf("Comparing \"%s\" and \"%s\" n=10 : %d\n", s5, s1, ft_strncmp(s5, s1, 10));
	printf("Comparing \"%s\" and \"%s\" n=1 : %d\n", s6, s5, ft_strncmp(s6, s5, 1));


	printf("\n### REAL STRCMP :\n");
	printf("Comparing \"%s\" and \"%s\" n=28 : %d\n", s1, s2, strncmp(s1, s2, 28));
	printf("Comparing \"%s\" and \"%s\" n=28 : %d\n", s1, s3, strncmp(s1, s3, 28));
	printf("Comparing \"%s\" and \"%s\" n=28 : %d\n", s3, s2, strncmp(s3, s2, 28));
	printf("Comparing \"%s\" and \"%s\" n=9 : %d\n", s4, s2, strncmp(s4, s2, 9));
	printf("Comparing \"%s\" and \"%s\" n=10 : %d\n", s5, s1, strncmp(s5, s1, 10));
	printf("Comparing \"%s\" and \"%s\" n=1 : %d\n", s6, s5, strncmp(s6, s5, 1));

	return (0);
}

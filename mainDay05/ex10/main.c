/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flgivern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/03 02:26:16 by flgivern          #+#    #+#             */
/*   Updated: 2018/08/04 18:27:54 by flgivern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strcapitalize(char *str);

int	main()
{
	char	*str;
	char	*str1;
	char	*str2;
	char	*str3;
	char	*str4;
	char	*str5;

	str = strdup("salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un b");
	str1 = strdup("XMummTyyptt");
	str2 = strdup("GvgTgNtXrqmmTqXENCgeLXIHzFIBS");
	str3 = strdup("reKt17+lOl MdR mdr 4242l42");
	str4 = strdup("NULL");
	str5 = strdup("a ab b bc d de1abcde");
	printf("%s\n", ft_strcapitalize(str));
	printf("%s\n", ft_strcapitalize(str1));
	printf("%s\n", ft_strcapitalize(str2));
	printf("%s\n", ft_strcapitalize(str3));
	printf("%s\n", ft_strcapitalize(str4));
	printf("%s\n", ft_strcapitalize(str5));
	return (0);
}

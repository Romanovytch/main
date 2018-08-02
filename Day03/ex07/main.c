/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flgivern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 18:38:43 by flgivern          #+#    #+#             */
/*   Updated: 2018/08/01 18:11:47 by flgivern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strrev(char *str);

int	main()
{
	char	*str1;
	char	*str2;
	char	*str3;
	
	str1 = malloc(sizeof(char) * 2);
	str1[0] = 'a';
	str1[1] = '\0';
	str1 = ft_strrev(str1);
	printf("%s\n", str1);
	str2 = malloc(sizeof(char) * 3);
	str2[0] = 'a';
	str2[1] = 'b';
	str2[3] = '\0';
	str2 = ft_strrev(str2);
	printf("%s\n", str2);
	str3 = malloc(sizeof(char) * 6);
	str3[0] = 'a';
	str3[1] = 'b';
	str3[2] = 'c';
	str3[3] = 'd';
	str3[4] = 'e';
	str3[5] = '\0';
	str3 = ft_strrev(str3);
	printf("%s\n", str3);
	
	free(str1);
	free(str2);
	free(str3);
	return (0);
}

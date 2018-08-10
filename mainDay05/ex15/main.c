/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flgivern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/03 02:34:26 by flgivern          #+#    #+#             */
/*   Updated: 2018/08/03 11:51:46 by flgivern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_str_is_printable(char *str);

int	main()
{
	char	*str = "bonjour";
	char	*str2 = "bonjour ";
	char	*str3 = "bonjOur";
	char	*str4 = "B";
	char	*str5 = "";
	char	*str6;
	char	*str7;
	int		i;

	i = 1;
	str6 = malloc(sizeof(char) * 33);
	while (i < 32)
	{
		str6[i-1] = i;
		++i;		
	}
	str6[i-1] = '\0';	
	str7 = malloc(sizeof(char) * 2);
	str7[0] = 127;
	str7[1] = 0;
	printf("Is \"%s\" printable ? : %d\n", str, ft_str_is_printable(str)); 
	printf("Is \"%s\" printable ? : %d\n", str2, ft_str_is_printable(str2)); 
	printf("Is \"%s\" printable ? : %d\n", str3, ft_str_is_printable(str3)); 
	printf("Is \"%s\" printable ? : %d\n", str4, ft_str_is_printable(str4)); 
	printf("Is \"%s\" printable ? : %d\n", str5, ft_str_is_printable(str5)); 
	printf("Is [NONPRINTABLE 0-31] printable ? : %d\n", ft_str_is_printable(str6)); 
	printf("Is [NONPRINTABLE 127] printable ? : %d\n", ft_str_is_printable(str7)); 
	free(str6);
	free(str7);
	return (0);
}

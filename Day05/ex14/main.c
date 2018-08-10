/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flgivern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/03 02:34:26 by flgivern          #+#    #+#             */
/*   Updated: 2018/08/04 19:31:57 by flgivern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main()
{
	char	*str = "bonjour";
	char	*str2 = "bonjour ";
	char	*str3 = "BONJOUR";
	char	*str4 = "B";
	char	*str5 = "";

	
	printf("Is \"%s\" uppercase ? : %d\n", str, ft_str_is_uppercase(str)); 
	printf("Is \"%s\" uppercase ? : %d\n", str2, ft_str_is_uppercase(str2)); 
	printf("Is \"%s\" uppercase ? : %d\n", str3, ft_str_is_uppercase(str3)); 
	printf("Is \"%s\" uppercase ? : %d\n", str4, ft_str_is_uppercase(str4)); 
	printf("Is \"%s\" uppercase ? : %d\n", str5, ft_str_is_uppercase(str5)); 
	return (0);
}

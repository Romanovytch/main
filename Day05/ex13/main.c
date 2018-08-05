/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flgivern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/03 02:34:26 by flgivern          #+#    #+#             */
/*   Updated: 2018/08/03 02:48:07 by flgivern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main()
{
	char	*str = "bonjour";
	char	*str2 = "bonjour ";
	char	*str3 = "bonjOur";
	char	*str4 = "B";
	char	*str5 = "";

	
	printf("Is \"%s\" lowercase ? : %d\n", str, ft_str_is_lowercase(str)); 
	printf("Is \"%s\" lowercase ? : %d\n", str2, ft_str_is_lowercase(str2)); 
	printf("Is \"%s\" lowercase ? : %d\n", str3, ft_str_is_lowercase(str3)); 
	printf("Is \"%s\" lowercase ? : %d\n", str4, ft_str_is_lowercase(str4)); 
	printf("Is \"%s\" lowercase ? : %d\n", str5, ft_str_is_lowercase(str5)); 
	return (0);
}

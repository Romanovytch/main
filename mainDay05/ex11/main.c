/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flgivern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/03 02:34:26 by flgivern          #+#    #+#             */
/*   Updated: 2018/08/03 02:39:04 by flgivern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main()
{
	char	*str = "bonjour";
	char	*str2 = "bonjour ";
	char	*str3 = "bonj0ur";
	char	*str4 = "ZaBoNjOuRAz";
	char	*str5 = "";

	
	printf("Is \"%s\" alpha ? : %d\n", str, ft_str_is_alpha(str)); 
	printf("Is \"%s\" alpha ? : %d\n", str2, ft_str_is_alpha(str2)); 
	printf("Is \"%s\" alpha ? : %d\n", str3, ft_str_is_alpha(str3)); 
	printf("Is \"%s\" alpha ? : %d\n", str4, ft_str_is_alpha(str4)); 
	printf("Is \"%s\" alpha ? : %d\n", str5, ft_str_is_alpha(str5)); 
	
	return (0);
}

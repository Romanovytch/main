/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flgivern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/03 02:34:26 by flgivern          #+#    #+#             */
/*   Updated: 2018/08/03 02:42:38 by flgivern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main()
{
	char	*str = "01234567896468614636467841846841854";
	char	*str2 = "42 born to c0de";
	char	*str3 = "1a";
	char	*str4 = "a1";
	char	*str5 = "";

	
	printf("Is \"%s\" numeric ? : %d\n", str, ft_str_is_numeric(str)); 
	printf("Is \"%s\" numeric ? : %d\n", str2, ft_str_is_numeric(str2)); 
	printf("Is \"%s\" numeric ? : %d\n", str3, ft_str_is_numeric(str3)); 
	printf("Is \"%s\" numeric ? : %d\n", str4, ft_str_is_numeric(str4)); 
	printf("Is \"%s\" numeric ? : %d\n", str5, ft_str_is_numeric(str5)); 
	return (0);
}

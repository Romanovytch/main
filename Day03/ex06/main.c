/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flgivern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 12:36:46 by flgivern          #+#    #+#             */
/*   Updated: 2018/08/01 12:40:20 by flgivern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str);

int	main()
{

	char	*str = "Test";
	char	*str2 = "Une phrase plus longue.";
	char	*str3 = "";
	char	*str4 = "42";


	printf("Testing : '%s' ; %d caracteres\n", str, ft_strlen(str));
	printf("Testing : '%s' ; %d caracteres\n", str2, ft_strlen(str2));
	printf("Testing : '%s' ; %d caracteres\n", str3, ft_strlen(str3));
	printf("Testing : '%s' ; %d caracteres\n", str4, ft_strlen(str4));
	return (0);
}

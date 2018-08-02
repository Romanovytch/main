/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flgivern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 23:56:31 by flgivern          #+#    #+#             */
/*   Updated: 2018/08/01 11:15:52 by flgivern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str);

int	main()
{
	int	nb;

	nb = atoi("2147483647");
	printf("Testing 2147483647 : %d\n", nb);
	nb = atoi("42");
	printf("Testing 42 : %d\n", nb);
	nb = atoi(" \t\r\f\v\n 2abc");
	printf("Testing [spaces] 2abc : %d\n", nb);
	nb = atoi("a50");
	printf("Testing a50 : %d\n", nb);
	nb = atoi("+2147");
	printf("Testing +2147 : %d\n", nb);
	nb = atoi("-1");
	printf("Testing -1 : %d\n", nb);
	nb = atoi("\n");
	printf("Testing [newline] : %d\n", nb);
	nb = atoi("-2147483648");
	printf("Testing -2147483648 : %d\n", nb);
	nb = atoi("+-80");
	printf("Testing +-80 : %d\n", nb);	
	nb = atoi("-+80");
	printf("Testing -+80 : %d\n", nb);
	nb = atoi("- 80");
	printf("Testing - 80 : %d\n", nb);
	nb = atoi("+ 80");
	printf("Testing + 80 : %d\n", nb);
	nb = atoi("");
	printf("Testing "" : %d\n", nb);
	nb = atoi("0");
	printf("Testing 0 : %d\n", nb);
	nb = atoi("-0");
	printf("Testing -0 : %d\n", nb);

	return (0);
}

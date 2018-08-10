/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flgivern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/03 13:55:40 by flgivern          #+#    #+#             */
/*   Updated: 2018/08/05 13:51:02 by flgivern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi_base(char *str, char *base);

int	main()
{
	printf("Converting \"%s\" from base \"%s\" (expecting 1A4) : %d\n", "235", "01234567", ft_atoi_base("235", "01234567"));
	printf("Converting \"%s\" from base \"%s\" (expecting 11) : %d\n", "1011", "01", ft_atoi_base("1011", "01"));
	printf("Converting \"%s\" from base \"%s\" (expecting ) : %d\n", "1C4", "0123456789ABCDEF", ft_atoi_base("1C4", "0123456789ABCDEF"));
	printf("Converting \"%s\" from base \"%s\" (expecting 1A4) : %d\n", "7FFFFFFF", "0123456789ABCDEF", ft_atoi_base("7FFFFFFF", "0123456789ABCDEF"));
	printf("Converting \"%s\" from base \"%s\" (expecting 1A4) : %d\n", "-80000000", "0123456789ABCDEF", ft_atoi_base("-80000000", "0123456789ABCDEF"));
	printf("Converting \"%s\" from base \"%s\" (expecting 1A4) : %d\n", "-235", "01234567", ft_atoi_base("-235", "01234567"));
	printf("Converting \"%s\" from base \"%s\" (expecting 1A4) : %d\n", "+3515612", "0123456", ft_atoi_base("+3515612", "0123456"));
	printf("Converting \"%s\" from base \"%s\" (expecting 0) : %d\n", "+0", "0a", ft_atoi_base("+0", "0a"));
	printf("Converting \"%s\" from base \"%s\" (expecting 0) : %d\n", "-0", "0#$", ft_atoi_base("-0", "0#$"));
	printf("Converting \"%s\" from base \"%s\" (expecting 0) : %d\n", "0", "0123456", ft_atoi_base("0", "0123456"));
	printf("\n\nGestion d'erreurs :\n");	
	printf("Converting \"%s\" from base \"%s\" (expecting 1A4) : %d\n", "--2A", "0123456789ABCDEF", ft_atoi_base("--2A", "0123456789ABCDEF"));
	printf("Converting \"%s\" from base \"%s\" (expecting 1A4) : %d\n", "-+2A", "0123456789ABCDEF", ft_atoi_base("-+2A", "0123456789ABCDEF"));
	printf("Converting \"%s\" from base \"%s\" (expecting 1A4) : %d\n", "+-2A", "0123456789ABCDEF", ft_atoi_base("+-2A", "0123456789ABCDEF"));
	printf("Converting \"%s\" from base \"%s\" (expecting 1A4) : %d\n", "++2A", "0123456789ABCDEF", ft_atoi_base("++2A", "0123456789ABCDEF"));
	printf("Converting \"%s\" from base \"%s\" (expecting 1A4) : %d\n", "2-A", "0123456789ABCDEF", ft_atoi_base("2-A", "0123456789ABCDEF"));
	printf("Converting \"%s\" from base \"%s\" (expecting 1A4) : %d\n", "+2-A", "0123456789ABCDEF", ft_atoi_base("+2-A", "0123456789ABCDEF"));
	printf("Converting \"%s\" from base \"%s\" (expecting 1A4) : %d\n", "--", "0123456789ABCDEF", ft_atoi_base("--", "0123456789ABCDEF"));
	printf("Converting \"%s\" from base \"%s\" (expecting 1A4) : %d\n", "++", "0123456789ABCDEF", ft_atoi_base("++", "0123456789ABCDEF"));
	printf("Converting \"%s\" from base \"%s\" (expecting 1A4) : %d\n", "- 235", "0123456", ft_atoi_base("- 235", "0123456"));
	printf("Converting \"%s\" from base \"%s\" (expecting 1A4) : %d\n", "+ 235", "0123456", ft_atoi_base("+ 235", "0123456"));
	printf("Converting \"%s\" from base \"%s\" (expecting 1A4) : %d\n", "235", "701234567", ft_atoi_base("235", "701234567"));
	printf("Converting \"%s\" from base \"%s\" (expecting 1A4) : %d\n", "235", "01+234567", ft_atoi_base("235", "01+234567"));
	printf("Converting \"%s\" from base \"%s\" (expecting 1A4) : %d\n", "", "01234567", ft_atoi_base("", "01234567"));
	printf("Converting \"%s\" from base \"%s\" (expecting 1A4) : %d\n", "235", "0", ft_atoi_base("235", "0"));
	printf("Converting \"%s\" from base \"%s\" (expecting 1A4) : %d\n", "42", "", ft_atoi_base("42", ""));
	printf("Converting \"%s\" from base \"%s\" (expecting 1A4) : %d\n", "", "", ft_atoi_base("", ""));
	
return (0);
}

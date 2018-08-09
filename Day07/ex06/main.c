/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flgivern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 12:01:10 by flgivern          #+#    #+#             */
/*   Updated: 2018/08/06 19:10:00 by flgivern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

int	main()
{
	printf("Converting \"%s\" from base \"%s\" to base \"%s\" :\n", "45762", "01234567", "0123");
	printf("%s\n", ft_convert_base("45762", "01234567", "0123"));
	printf("Converting \"%s\" from base \"%s\" to base \"%s\" :\n", "011010101110010101001001110", "01", "0123456789abcdef");
	printf("%s\n", ft_convert_base("011010101110010101001001110", "01", "0123456789abcdef"));
	printf("Converting \"%s\" from base \"%s\" to base \"%s\" :\n", "2147483647", "0123456789", "012345");
	printf("%s\n", ft_convert_base("2147483647", "0123456789", "012345"));
	printf("Converting \"%s\" from base \"%s\" to base \"%s\" :\n", "-100000", "0123456789abc", "zZ");
	printf("%s\n", ft_convert_base("-100000", "0123456789abc", "zZ"));
	printf("Converting \"%s\" from base \"%s\" to base \"%s\" :\n", "-42", "42", "01");
	printf("%s\n", ft_convert_base("-42", "42", "01"));
	printf("Converting \"%s\" from base \"%s\" to base \"%s\" :\n", "-2147483648", "0123456789", "<.>");
	printf("%s\n", ft_convert_base("-2147483648", "0123456789", "<.>"));
	printf("Converting \"%s\" from base \"%s\" to base \"%s\" :\n", "101", "01", "01234567");
	printf("%s\n", ft_convert_base("101", "01", "01234567"));
	printf("Converting \"%s\" from base \"%s\" to base \"%s\" :\n", "-0", "0REO", "04");
	printf("%s\n", ft_convert_base("-0", "0REO", "04"));
	printf("Converting \"%s\" from base \"%s\" to base \"%s\" :\n", "1100110001001101010010011111000", "01", "Dlt geiP");
	printf("%s\n", ft_convert_base("1100110001001101010010011111000", "01", "Dlt geiP"));
	printf("Converting \"%s\" from base \"%s\" to base \"%s\" :\n", "26045DBD", "0123456789ABCDEF", "ltPrhbDae");
	printf("%s\n", ft_convert_base("26045DBD", "0123456789ABCDEF", "ltPrhbDae"));
	printf("Converting \"%s\" from base \"%s\" to base \"%s\" :\n", "5882", "0123456789", "1ovRrXW");
	printf("%s\n", ft_convert_base("5882", "0123456789", "1ovRrXW"));
	printf("Converting \"%s\" from base \"%s\" to base \"%s\" :\n", "134158", "0123456789", "01");
	printf("%s\n", ft_convert_base("134158", "0123456789", "01"));
	printf("Converting \"%s\" from base \"%s\" to base \"%s\" :\n", "1111111", "0123456789a", "0123456789ab");
	printf("%s\n", ft_convert_base("1111111", "0123456789a", "0123456789ab"));
}

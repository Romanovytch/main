/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flgivern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/03 00:05:13 by flgivern          #+#    #+#             */
/*   Updated: 2018/08/04 18:10:09 by flgivern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char	*ft_strupcase(char *str);

int	main()
{
	char	*str;

	str = strdup("!d@%<>?{:}wYSv37_8z**Wx^5!dklsfmregklFKJDP()CgD_N+UF7M@");
	printf("Before : %s\n", str);
	printf("After : %s\n", ft_strupcase(str));
	free(str);
	return (0);
}

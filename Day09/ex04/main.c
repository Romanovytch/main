/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flgivern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 21:50:53 by flgivern          #+#    #+#             */
/*   Updated: 2018/08/09 22:00:31 by flgivern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_rot42(char *str);

int	main()
{
	char	*str = strdup("Bonjour Ceci est UNE phrase 013153/,]=-_)(*&^%$#@");

	str = ft_rot42(str);
	printf("%s\n", str);
	return (0);
}

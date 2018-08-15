/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flgivern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 09:44:19 by flgivern          #+#    #+#             */
/*   Updated: 2018/08/09 10:02:29 by flgivern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int	ft_count_if(char **tab, int (*f)(char *));

int	ft_is_str_numeric(char *str)
{
	while (*str)
	{
		if (!(*str >= '0' && *str <= '9'))
			return (0);
		str++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	char	**args;
	int		i;

	i = 0;
	args = malloc(sizeof(char *) * (argc + 1));
	while (i < argc)
	{
		args[i] = strdup(argv[i]);
		++i;
	}
	args[i] = 0;
	printf("\n### Applying is_str_numeric on args :\n\n");
	printf("%d\n", ft_count_if(args, &ft_is_str_numeric));
	return (0);
}

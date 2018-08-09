/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flgivern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 22:26:59 by flgivern          #+#    #+#             */
/*   Updated: 2018/08/06 15:38:19 by flgivern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strdup(char *str);

int	main()
{
	char	*str;

	printf("\n\nYOUR STRDUP:\n");
	printf("### Strdup string \"%s\" :\n", "");
	str = ft_strdup("");
	printf("%s\n", str);
	free(str);
	printf("### Strdup string \"%s\" :\n", "Test");
	str = ft_strdup("Test");
	printf("%s\n", str);
	free(str);
	printf("### Strdup string \"%s\" :\n", "The Game is not over. You just lost the Game.");
	str = ft_strdup("The Gams is not over. You just lost the Game.");
	printf("%s\n", str);
	free(str);
	printf("### Strdup string \"%s\" :\n", ".");
	str = ft_strdup(".");
	printf("%s\n", str);
	free(str);

	printf("\n\nREAL STRDUP:\n");
	printf("### Strdup string \"%s\" :\n", "");
	str = strdup("");
	printf("%s\n", str);
	free(str);
	printf("### Strdup string \"%s\" :\n", "Test");
	str = strdup("Test");
	printf("%s\n", str);
	free(str);
	printf("### Strdup string \"%s\" :\n", "The Game is not over. You just lost the Game.");
	str = strdup("The Gams is not over. You just lost the Game.");
	printf("%s\n", str);
	free(str);
	printf("### Strdup string \"%s\" :\n", ".");
	str = strdup(".");
	printf("%s\n", str);
	free(str);
}

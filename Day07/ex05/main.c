/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flgivern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 02:21:33 by flgivern          #+#    #+#             */
/*   Updated: 2018/08/09 14:39:14 by lgillett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	**ft_split_whitespaces(char *str);
void	ft_print_words_tables(char **tab);

int	main()
{
	char	*str = "\tjsadlf few dfe,fwoia fwek 541f 2f 2f we5 51 f53ge2g 0dg3  5 g  e   ar35g 0rn\n\n\tsg 1gad\n4gs gg 6 16f 4f43 ";

	ft_print_words_tables(ft_split_whitespaces(str));
	return (0);
}

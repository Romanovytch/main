/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flgivern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 21:59:44 by flgivern          #+#    #+#             */
/*   Updated: 2018/08/05 10:37:26 by flgivern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_print_memory(void *addr, unsigned int size);

int	main()
{
	char	*str = "Salut les aminches c'est cool show mem on fait de truc terrible\0.";
	ft_print_memory((void*)str, 20);
	return (0);
}

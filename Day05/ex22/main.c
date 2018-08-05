/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flgivern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 16:02:01 by flgivern          #+#    #+#             */
/*   Updated: 2018/08/04 16:32:31 by flgivern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr_non_printable(char *str);

int	main(void)
{
	ft_putstr_non_printable("Coucou\ntu vas bien ?");
	ft_putstr_non_printable("\tOui, super\v?\f");
	ft_putstr_non_printable("Escape : \e");
	return (0);	
}

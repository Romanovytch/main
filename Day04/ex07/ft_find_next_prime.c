/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flgivern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 18:52:48 by flgivern          #+#    #+#             */
/*   Updated: 2018/08/02 00:30:27 by flgivern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_prime(int nb)
{
	long	i;
	int		w;

	i = 5;
	w = 2;
	if (nb < 0)
		return (0);
	if (nb == 2)
		return (1);
	if (nb == 3)
		return (1);
	if (nb == 1)
		return (0);
	if (nb % 2 == 0)
		return (0);
	if (nb % 3 == 0)
		return (0);
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i += w;
		w = 6 - w;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	while (!(is_prime(nb)))
		++nb;
	return (nb);
}

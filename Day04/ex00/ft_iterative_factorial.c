/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flgivern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 14:17:18 by flgivern          #+#    #+#             */
/*   Updated: 2018/08/02 00:11:01 by flgivern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;
	int	i;

	i = 1;
	res = 1;
	if (nb > 12 || nb < 0)
		return (0);
	while (i <= nb)
	{
		res *= i;
		++i;
	}
	return (res);
}

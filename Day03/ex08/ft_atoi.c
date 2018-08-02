/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flgivern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 19:58:00 by flgivern          #+#    #+#             */
/*   Updated: 2018/08/01 11:17:28 by flgivern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_space(char sp)
{
	if (sp == ' ' || sp == '\t' || sp == '\n' ||
		sp == '\v' || sp == '\f' || sp == '\r')
		return (1);
	return (0);
}

int	is_nb(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	check(char **str, int i)
{
	if (((*str)[i] == '+' || (*str)[i] == '-'))
	{
		if (!((*str)[i + 1] >= '0' && (*str)[i + 1] <= '9'))
			return (0);
		else
		{
			*str = (*str) + i + 1; 
			return ((*((*str)-1) == '+') ? 1 : -1);
		}
	}
	else if (!(is_nb((*str)[i])))
		return (0);
	*str = (*str) + i;
	return (1);
}

int	ft_atoi(char *str)
{
	int	nb;
	int	i;
	int	sign;

	i = 0;
	nb = 0;
	while (is_space(str[i]))
		++i;
	if ((sign = check(&str, i)) == 0)
		return nb;
	i = 0;
	nb = str[i++] - '0';
	while (is_nb(str[i]))
		nb = nb * 10 + (str[i++] - '0');
	return (nb*sign);
}

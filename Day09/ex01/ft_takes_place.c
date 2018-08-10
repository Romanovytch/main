/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flgivern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 17:53:18 by flgivern          #+#    #+#             */
/*   Updated: 2018/08/09 18:29:50 by flgivern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	int		a_min;
	int		b_min;
	char	a_day;
	char	b_day;

	a_min = hour % 12;
	b_min = hour % 12 + 1;
	a_day = 'A';
	b_day = 'A';
	if (hour == 0 || hour == 12)
		a_min = 12;
	if (hour == 11)
		b_day = 'P';
	if (hour > 11)
	{
		a_day = 'P';
		b_day = 'P';
	}
	if (hour == 23)
		b_day = 'A';
	printf("THE FOLLOWING TAKES PLACE BETWEEN %d:00 %c.M", a_min, a_day);
	printf(". AND %d:00 %c.M.\n", b_min, b_day);
}

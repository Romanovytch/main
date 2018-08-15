/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flgivern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 09:30:16 by flgivern          #+#    #+#             */
/*   Updated: 2018/08/09 09:37:44 by flgivern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_foreach(int *tab, int length, void (*f)(int));

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void				ft_putnbr(int nb)
{
	long			pw;
	char			digit;
	long			n;

	n = nb;
	pw = 1;
	if (n < 0)
	{
		ft_putchar('-');
		n = n * -1;
	}
	if (pw <= n)
	{
		while (pw <= n)
			pw *= 10;
		pw /= 10;
	}
	while (pw > 0)
	{
		digit = n / pw;
		ft_putchar(digit + '0');
		n = n % pw;
		pw /= 10;
	}
	ft_putchar('\n');
}

int	main()
{
	int	tab[10] = {5, 10, 14, 17, 15, 16, 17, 10, 1, 0};

	printf("Applying ft_putnbr on tab:\n");
	ft_foreach(tab, 10, &ft_putnbr);
}

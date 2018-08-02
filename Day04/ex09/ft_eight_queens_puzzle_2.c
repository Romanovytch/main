/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flgivern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 00:33:12 by flgivern          #+#    #+#             */
/*   Updated: 2018/08/02 00:41:27 by flgivern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define COLS 8
#define ROWS 8

void	ft_putchar(char c);

int		check_line(int echq[COLS][ROWS], int posx, int posy)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (x < 8)
	{
		if (echq[x][posy] == 1 && x != posx)
			return (0);
		++x;
	}
	while (y < 8)
	{
		if (echq[posx][y] == 1 && y != posy)
			return (0);
		++y;
	}
	return (1);
}

int		check_cross(int echq[COLS][ROWS], int posx, int posy)
{
	int	x;
	int	y;

	x = posx;
	y = posy;
	while (x != 7 && y != 7)
		if (echq[++x][++y] == 1)
			return (0);
	x = posx;
	y = posy;
	while (x != 7 && y != 0)
		if (echq[++x][--y] == 1)
			return (0);
	x = posx;
	y = posy;
	while (x != 0 && y != 0)
		if (echq[--x][--y] == 1)
			return (0);
	x = posx;
	y = posy;
	while (x != 0 && y != 7)
		if (echq[--x][++y] == 1)
			return (0);
	return (1);
}

void	print_echq(int echq[COLS][ROWS])
{
	int	i;
	int	j;

	i = 0;
	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			if (echq[i][j] == 1)
				ft_putchar(j + '0' + 1);
			++j;
		}
		++i;
	}
	ft_putchar('\n');
}

void	recursive_eight_queens(int (*echq)[COLS][ROWS], int posx, int nb)
{
	int posy;

	posy = 0;
	while (posy < 8)
	{
		if (check_line(*echq, posx, posy) && check_cross(*echq, posx, posy))
		{
			(*echq)[posx][posy] = 1;
			recursive_eight_queens(echq, posx + 1, nb);
			if (posx == 7)
			{
				print_echq(*echq);
				nb = nb + 1;
			}
			(*echq)[posx][posy] = 0;
		}
		posy = posy + 1;
	}
}

void	ft_eight_queens_puzzle_2(void)
{
	int echq[COLS][ROWS];
	int nb;
	int i;
	int j;

	i = 0;
	nb = 0;
	while (i < 8)
	{
		j = 0;
		while (j < 8)
			echq[i][j++] = 0;
		i = i + 1;
	}
	recursive_eight_queens(&echq, 0, 0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flgivern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 00:31:36 by flgivern          #+#    #+#             */
/*   Updated: 2018/08/02 00:32:42 by flgivern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define COLS 8
#define ROWS 8

int	check_line(int echq[COLS][ROWS], int posx, int posy)
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

int	check_cross(int echq[COLS][ROWS], int posx, int posy)
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

int	can_be_placed(int echq[COLS][ROWS], int posx, int posy)
{
	if (check_line(echq, posx, posy) == 0)
		return (0);
	if (check_cross(echq, posx, posy) == 0)
		return (0);
	return (1);
}

int	recursive_eight_queens(int echq[COLS][ROWS], int posx, int nb)
{
	int posy;

	posy = 0;
	while (posy < 8)
	{
		if (can_be_placed(echq, posx, posy) == 1)
		{
			echq[posx][posy] = 1;
			nb = recursive_eight_queens(echq, posx + 1, nb);
			if (posx == 7)
				nb = nb + 1;
			echq[posx][posy] = 0;
		}
		posy = posy + 1;
	}
	return (nb);
}

int	ft_eight_queens_puzzle(void)
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
	nb = recursive_eight_queens(echq, 0, 0);
	return (nb);
}

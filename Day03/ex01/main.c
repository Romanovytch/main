/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flgivern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 12:07:42 by flgivern          #+#    #+#             */
/*   Updated: 2018/08/10 09:13:19 by lgillett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int  *********nbr);

int	main()
{

	int	nb;
	int	*ptr;
	int	**ptr1;
	int	***ptr2;
	int	****ptr3;
	int	*****ptr4;
	int	******ptr5;
	int	*******ptr6;
	int ********ptr7;
	
	nb = 0;
	ptr = &nb;
	ptr1 = &ptr;
	ptr2 = &ptr1;
	ptr3 = &ptr2;
	ptr4 = &ptr3;
	ptr5 = &ptr4;
	ptr6 = &ptr5;
	ptr7 = &ptr6;
	printf("Before : %d\n", nb);
	ft_ultimate_ft(&ptr7);
	printf("After : %d\n", nb);
	return (0);
}

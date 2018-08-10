/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flgivern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 11:08:07 by flgivern          #+#    #+#             */
/*   Updated: 2018/08/10 11:15:43 by flgivern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_perso.h"
#include "ft_fight.h"

int	main()
{
	t_perso	anastacia;
	t_perso	nicolas;

	anastacia.name = "Anastacia";
	anastacia.life = 50.0;

	nicolas.name = "Nicolas Bauer";
	nicolas.life = 100.0;
	ft_fight(&nicolas, &anastacia, KICK);
	printf("%s has %f HP\n", anastacia.name, anastacia.life);
	ft_fight(&nicolas, &anastacia, PUNCH);
	printf("%s has %f HP\n", anastacia.name, anastacia.life);
	ft_fight(&nicolas, &anastacia, HEADBUTT);
	printf("%s has %f HP\n", anastacia.name, anastacia.life);
	ft_fight(&nicolas, &anastacia, PUNCH);
	printf("%s has %f HP\n", anastacia.name, anastacia.life);
	ft_fight(&nicolas, &anastacia, PUNCH);
	printf("%s has %f HP\n", anastacia.name, anastacia.life);
	ft_fight(&nicolas, &anastacia, PUNCH);
	printf("%s has %f HP\n", anastacia.name, anastacia.life);
}

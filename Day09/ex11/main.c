/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flgivern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 08:26:48 by flgivern          #+#    #+#             */
/*   Updated: 2018/08/10 12:59:08 by lgillett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "ft_perso.h"

int	main()
{
	t_perso	jack;
	
	jack.name = strdup("jack");
	jack.life = 100.0;
	jack.age = 42;
	jack.profession = SAVE_THE_WORLD;
	return (0);
}

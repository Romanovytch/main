/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flgivern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 18:31:01 by flgivern          #+#    #+#             */
/*   Updated: 2018/08/01 12:44:03 by flgivern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		getlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		++i;
	return (i);
}

char	*ft_strrev(char *str)
{
	int		len;
	int		i;
	char	tmp;

	i = 0;
	len = getlen(str);
	while (i < (len / 2))
	{
		tmp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = tmp;
		++i;
	}
	return (str);
}

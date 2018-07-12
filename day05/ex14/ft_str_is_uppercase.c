/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwidjaja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 04:27:54 by dwidjaja          #+#    #+#             */
/*   Updated: 2018/06/26 04:28:12 by dwidjaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	up(char c)
{
	if ('A' <= c && c <= 'Z')
		return (1);
	return (0);
}

int	ft_str_is_uppercase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		if (!up(str[i++]))
			return (0);
	return (1);
}

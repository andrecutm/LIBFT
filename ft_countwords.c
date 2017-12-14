/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countwords.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandrecu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 20:38:10 by eandrecu          #+#    #+#             */
/*   Updated: 2017/12/12 20:38:28 by eandrecu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int		ft_countwords(char const *str, char c)
{
	int		cnt;
	int		i;

	i = 0;
	cnt = 0;
	while (*(str + i))
	{
		while (*(str + i) == c)
			i++;
		if (*(str + i) != c && *(str + i) != '\0')
			cnt++;
		while (*(str + i) != c && *(str + i) != '\0')
			i++;
	}
	return (cnt);
}

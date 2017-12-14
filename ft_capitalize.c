/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_capitalize.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandrecu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/13 18:28:49 by eandrecu          #+#    #+#             */
/*   Updated: 2017/12/13 19:02:52 by eandrecu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void		ft_capitalize(char *str)
{
	size_t	i;

	i = 0;
	while (*(str + i))
	{
		if (*(str + i) >= 'a' && *(str + i) <= 'z')
		{
			*(str + i) = *(str + i) - 32;
			i++;
		}
		else
			i++;
		while (ft_isalpha(*(str + i)))
		{
			if (*(str + i) >= 'A' && *(str + i) <= 'Z')
				*(str + i) = ft_tolower(*(str + i));
			if (*(str + i) >= 'a' && *(str + i) <= 'z')
				;
			i++;
		}
		while (*(str + i) == ' ')
			i++;
	}
}

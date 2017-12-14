/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandrecu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 21:10:12 by eandrecu          #+#    #+#             */
/*   Updated: 2017/12/12 21:10:21 by eandrecu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char		*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		i;
	size_t		j;
	size_t		k;
	size_t		ok;

	if (!ft_strlen(little))
		return ((char *)big);
	i = -1;
	ok = 1;
	while (*(big + ++i) && i < len)
	{
		j = 0;
		if (*(big + i) == *(little + 0))
		{
			k = i;
			ok = 1;
			while (*(big + k) && *(little + j) && j < len && k < len)
				if (*(big + k++) != *(little + j++))
					ok = 0;
			if (ok && !*(little + j))
				return ((char *)big + i);
		}
	}
	return (NULL);
}

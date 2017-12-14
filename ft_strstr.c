/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandrecu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 21:13:19 by eandrecu          #+#    #+#             */
/*   Updated: 2017/12/12 21:13:42 by eandrecu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char		*ft_strstr(const char *haystack, const char *needle)
{
	int		i;
	int		j;
	int		k;
	int		ok;

	if (!ft_strlen(needle))
		return ((char *)haystack);
	i = -1;
	ok = 0;
	while (*(haystack + ++i) && !ok)
	{
		if (*(haystack + i) == *(needle + 0))
		{
			j = 0;
			k = i;
			ok = 1;
			while (*(needle + j))
				if (*(needle + j++) != *(haystack + k++))
					ok = 0;
			if (ok)
				return ((char *)haystack + i);
		}
	}
	return (NULL);
}

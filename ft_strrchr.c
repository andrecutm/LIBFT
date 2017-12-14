/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandrecu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 21:10:40 by eandrecu          #+#    #+#             */
/*   Updated: 2017/12/12 21:11:16 by eandrecu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char		*ft_strrchr(const char *s, int c)
{
	char *ptr;

	ptr = NULL;
	if (*(s + 0) == '\0' && !(*(s + 1)))
		return (NULL);
	while (1)
	{
		if (*s == (char)c)
			ptr = (char *)s;
		if (*s++ == '\0')
			return ((char *)ptr);
	}
	return (NULL);
}

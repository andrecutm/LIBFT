/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandrecu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 20:48:44 by eandrecu          #+#    #+#             */
/*   Updated: 2017/12/12 20:49:36 by eandrecu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void		*ft_memchr(const void *s, int c, size_t n)
{
	const char		*ptr;
	size_t			i;

	i = 0;
	ptr = (const char *)s;
	while (i < n)
	{
		if (*(ptr + i) == (char)c)
			return ((void *)ptr + i);
		i++;
	}
	return (NULL);
}

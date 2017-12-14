/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandrecu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 20:47:33 by eandrecu          #+#    #+#             */
/*   Updated: 2017/12/12 20:48:21 by eandrecu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void		*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char	*dst;
	size_t	i;

	dst = dest;
	i = 0;
	while (i < n)
	{
		*(dst + i) = *((unsigned char *)src + i);
		if (*((unsigned char *)src + i) == (unsigned char)c)
			return (dest + i + 1);
		i++;
	}
	return (NULL);
}

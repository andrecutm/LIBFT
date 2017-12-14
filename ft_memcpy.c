/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandrecu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 20:51:05 by eandrecu          #+#    #+#             */
/*   Updated: 2017/12/12 20:51:26 by eandrecu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void		*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*dst;
	const char	*sr;
	size_t		i;

	i = 0;
	dst = dest;
	sr = src;
	while (i < n)
	{
		*(dst + i) = *(sr + i);
		i++;
	}
	return (dest);
}

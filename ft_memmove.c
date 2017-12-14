/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandrecu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 20:52:08 by eandrecu          #+#    #+#             */
/*   Updated: 2017/12/12 20:52:45 by eandrecu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void		*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*pd;
	char	*ps;
	size_t	i;

	i = 0;
	pd = (char *)dest;
	ps = (char *)src;
	if (ps > pd)
		while (i < n)
		{
			*(pd + i) = *(ps + i);
			i++;
		}
	else
		while ((int)(--n) >= 0)
			*(pd + n) = *(ps + n);
	return (dest);
}

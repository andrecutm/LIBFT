/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandrecu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 21:14:13 by eandrecu          #+#    #+#             */
/*   Updated: 2017/12/12 21:14:14 by eandrecu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char		*nw;
	size_t		i;

	if (!s)
		return (NULL);
	nw = ft_strnew(len);
	if (!nw)
		return (NULL);
	i = 0;
	while (i < len)
	{
		*(nw + i) = *(s + start);
		i++;
		start++;
	}
	return (nw);
}

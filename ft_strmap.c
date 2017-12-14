/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandrecu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 21:06:06 by eandrecu          #+#    #+#             */
/*   Updated: 2017/12/12 21:06:20 by eandrecu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char		*ft_strmap(char const *s, char (*f)(char))
{
	char		*nw;
	size_t		i;

	if (!s)
		return (NULL);
	nw = ft_strnew(ft_strlen(s));
	if (!nw)
		return (NULL);
	i = 0;
	while (*(s + i))
	{
		*(nw + i) = f(*(s + i));
		i++;
	}
	return (nw);
}

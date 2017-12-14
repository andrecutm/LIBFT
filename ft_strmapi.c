/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandrecu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 21:06:33 by eandrecu          #+#    #+#             */
/*   Updated: 2017/12/12 21:07:12 by eandrecu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*nw;
	unsigned int	i;

	if (!s)
		return (NULL);
	nw = ft_strnew(ft_strlen(s));
	if (!nw)
		return (NULL);
	i = 0;
	while (*(s + i))
	{
		*(nw + i) = f(i, *(s + i));
		i++;
	}
	return (nw);
}

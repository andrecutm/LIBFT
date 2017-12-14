/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandrecu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 21:02:16 by eandrecu          #+#    #+#             */
/*   Updated: 2017/12/12 21:02:33 by eandrecu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*nw;
	size_t	len;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	nw = ft_strnew(len);
	if (!nw)
		return (NULL);
	i = -1;
	j = -1;
	while (++i < ft_strlen(s1))
		*(nw + i) = *(s1 + i);
	while (++j < ft_strlen(s2))
		*(nw + i++) = *(s2 + j);
	return (nw);
}

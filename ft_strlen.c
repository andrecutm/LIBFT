/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandrecu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 21:03:45 by eandrecu          #+#    #+#             */
/*   Updated: 2017/12/12 21:05:51 by eandrecu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t		ft_strlen(const char *s)
{
	size_t		i;
	const char	*p;

	p = s;
	i = 0;
	while (*p)
	{
		p++;
		i++;
	}
	return (i);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandrecu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 20:40:00 by eandrecu          #+#    #+#             */
/*   Updated: 2017/12/12 20:41:13 by eandrecu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char		*ft_itoa(int n)
{
	char			*str;
	size_t			len;
	unsigned int	copy;

	len = ft_countnumbers(n);
	copy = n;
	if (n < 0)
	{
		copy = -n;
		len++;
	}
	if (!(str = ft_strnew(len)))
		return (NULL);
	str[--len] = copy % 10 + '0';
	copy = copy / 10;
	while (copy)
	{
		str[--len] = copy % 10 + '0';
		copy = copy / 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}

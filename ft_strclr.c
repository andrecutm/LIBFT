/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandrecu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 20:57:48 by eandrecu          #+#    #+#             */
/*   Updated: 2017/12/12 20:58:15 by eandrecu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void		ft_strclr(char *s)
{
	size_t	i;

	i = 0;
	if (s)
	{
		while (*(s + i) != '\0')
		{
			*(s + i) = '\0';
			i++;
		}
	}
}

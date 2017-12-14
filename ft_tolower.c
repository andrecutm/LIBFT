/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandrecu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 21:15:51 by eandrecu          #+#    #+#             */
/*   Updated: 2017/12/12 21:15:55 by eandrecu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int		ft_tolower(int c)
{
	if ((c <= 'Z' && c >= 'A'))
		return (c + 32);
	return (c);
}

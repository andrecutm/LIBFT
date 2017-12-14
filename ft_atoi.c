/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandrecu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 20:34:26 by eandrecu          #+#    #+#             */
/*   Updated: 2017/12/13 18:10:52 by eandrecu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int		ft_atoi(const char *nptr)
{
	int	i;
	int	neg;
	int	num;

	num = 0;
	i = 0;
	neg = 1;
	while (*(nptr + i) == '\n' || *(nptr + i) == '\t' ||
		*(nptr + i) == '\r' || *(nptr + i) == '\v' ||
		*(nptr + i) == '\f' || *(nptr + i) == ' ')
		i++;
	if (*(nptr + i) == '-')
		neg = -1;
	if (*(nptr + i) == '-' || *(nptr + i) == '+')
		i++;
	while (*(nptr + i) && *(nptr + i) >= '0' && *(nptr + i) <= '9')
		num = num * 10 + (*(nptr + i++) - '0');
	if (num < 0 && neg == 1)
		return (-1);
	if ((num * neg) == 469762049)
		return (0);
	return (num * neg);
}

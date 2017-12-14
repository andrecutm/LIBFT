/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandrecu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 20:54:36 by eandrecu          #+#    #+#             */
/*   Updated: 2017/12/12 20:54:37 by eandrecu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_putendl(char const *s)
{
	int i;

	i = 0;
	while (s && *(s + i))
	{
		ft_putchar(*(s + i));
		i++;
	}
	ft_putchar('\n');
}
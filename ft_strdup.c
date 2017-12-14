/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandrecu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 21:00:48 by eandrecu          #+#    #+#             */
/*   Updated: 2017/12/12 21:00:49 by eandrecu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char		*ft_strdup(const char *src)
{
	char		*ptr;
	size_t		n;

	n = ft_strlen(src) + 1;
	ptr = (char *)malloc(sizeof(char) * n);
	if (!ptr)
		return (NULL);
	ft_strcpy(ptr, src);
	return (ptr);
}

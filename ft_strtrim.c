/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandrecu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 21:14:30 by eandrecu          #+#    #+#             */
/*   Updated: 2017/12/12 21:15:42 by eandrecu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static int	has_whitespaces(char c)
{
	return ((c == ' ' || c == '\t' || c == '\n') ? 1 : 0);
}

char		*ft_strtrim(char const *s)
{
	int		i;
	int		len;
	char	*str;

	if (!s)
		return (NULL);
	len = (int)ft_strlen(s);
	while (has_whitespaces(*(s + len - 1)))
		len--;
	i = -1;
	while (has_whitespaces(*(s + ++i)))
		len--;
	if (len <= 0)
		len = 0;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	s = s + i;
	i = -1;
	while (++i < len)
		*(str + i) = *s++;
	*(str + i) = '\0';
	return (str);
}

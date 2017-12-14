/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandrecu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 21:11:28 by eandrecu          #+#    #+#             */
/*   Updated: 2017/12/12 21:13:09 by eandrecu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static int	wordlen(char const *str, char c)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (*(str + i) == c)
		i++;
	while (*(str + i) != c && *(str + i) != '\0')
	{
		i++;
		len++;
	}
	return (len);
}

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**strc;

	if (!s || !(strc = (char **)
				malloc(sizeof(char *) * (ft_countwords(s, c) + 1))))
		return (NULL);
	i = 0;
	j = 0;
	while (i < ft_countwords(s, c))
	{
		k = 0;
		if (!(strc[i] = ft_strnew(wordlen(&s[j], c) + 1)))
			strc[i] = NULL;
		while (*(s + j) == c)
			j++;
		while (*(s + j) != c && *(s + j))
			strc[i][k++] = s[j++];
		strc[i++][k] = '\0';
	}
	strc[i] = 0;
	return (strc);
}

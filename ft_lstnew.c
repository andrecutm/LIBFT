/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandrecu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 20:43:36 by eandrecu          #+#    #+#             */
/*   Updated: 2017/12/12 20:44:05 by eandrecu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list		*nwlist;

	nwlist = (t_list *)malloc(sizeof(*nwlist));
	if (!(nwlist))
		return (NULL);
	if (!content)
	{
		nwlist->content = NULL;
		nwlist->content_size = 0;
	}
	else
	{
		if (!(nwlist->content = malloc(content_size)))
			return (NULL);
		ft_memcpy(nwlist->content, content, content_size);
		nwlist->content_size = content_size;
	}
	nwlist->next = NULL;
	return (nwlist);
}

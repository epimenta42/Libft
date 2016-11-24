/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epimenta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/19 02:39:20 by epimenta          #+#    #+#             */
/*   Updated: 2016/11/19 02:39:24 by epimenta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*dest;

	dest = NULL;
	if (lst != NULL)
		dest = ft_lstnew(lst->content, lst->content_size);
	if (dest == NULL)
		return (NULL);
	dest = f(dest);
	if (lst->next)
		dest->next = ft_lstmap(lst->next, f);
	return (dest);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epimenta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/19 02:38:47 by epimenta          #+#    #+#             */
/*   Updated: 2016/11/19 02:38:50 by epimenta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*next;
	t_list	*tmp;

	next = (*alst)->next;
	if (alst != NULL)
	{
		while (next != NULL)
		{
			tmp = next->next;
			ft_lstdelone(&next, del);
			free(next);
			next = tmp;
		}
		(*alst)->next = NULL;
		ft_lstdelone(alst, del);
	}
}

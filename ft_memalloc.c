/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epimenta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 16:34:00 by epimenta          #+#    #+#             */
/*   Updated: 2016/11/22 23:27:31 by epimenta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char *str;

	if ((str = (char *)malloc(size * sizeof(*str))) == NULL)
		return (NULL);
	ft_bzero(str, size);
	return ((void *)str);
}

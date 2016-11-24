/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epimenta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 11:18:31 by epimenta          #+#    #+#             */
/*   Updated: 2016/11/14 12:08:27 by epimenta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t len;

	len = 0;
	while (len < n)
	{
		if (((unsigned char *)s1)[len] != ((unsigned char*)s2)[len])
			return (((unsigned char *)s1)[len] - ((unsigned char *)s2)[len]);
		len++;
	}
	return (0);
}

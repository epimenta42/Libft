/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epimenta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 10:56:53 by epimenta          #+#    #+#             */
/*   Updated: 2016/11/14 12:17:59 by epimenta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			len;

	str = (unsigned char *)s;
	len = 0;
	while (len < n)
	{
		if (*(unsigned char *)str == (unsigned char)c)
			return (void *)str;
		str++;
		len++;
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epimenta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 15:26:37 by epimenta          #+#    #+#             */
/*   Updated: 2016/11/10 08:40:47 by epimenta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *str;

	if (len > 0)
	{
		str = (unsigned char*)b;
		while (len--)
		{
			*str = (unsigned char)c;
			str++;
		}
	}
	return (b);
}

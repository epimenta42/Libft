/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epimenta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 14:15:01 by epimenta          #+#    #+#             */
/*   Updated: 2016/11/10 10:41:27 by epimenta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strcat(char *dst, const char *src)
{
	int		i;
	size_t	strlen;

	strlen = ft_strlen(dst);
	i = 0;
	while (src[i] != '\0')
	{
		dst[strlen + i] = src[i];
		i++;
	}
	dst[strlen + i] = '\0';
	return (dst);
}

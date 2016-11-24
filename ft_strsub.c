/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epimenta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 15:35:12 by epimenta          #+#    #+#             */
/*   Updated: 2016/11/17 16:19:31 by epimenta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	if (s != '\0')
	{
		if ((str = ft_memalloc(len + 1)) == NULL)
			return (NULL);
		i = 0;
		while (len > i && s[i] != '\0')
		{
			str[i] = s[start + i];
			i++;
		}
		while (len > i)
		{
			str[i] = '\0';
			i++;
		}
		return (str);
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epimenta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 10:13:24 by epimenta          #+#    #+#             */
/*   Updated: 2016/11/18 13:45:20 by epimenta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = 0;
	if (s)
	{
		j = ft_strlen(s) - 1;
		while (s[i] && ft_isspace(s[i]))
			i++;
		while (j > 0 && ft_isspace(s[j]))
			j--;
		j++;
		if (i < j)
		{
			if ((str = ft_strsub(s, i, j - i)))
				return (str);
		}
		else
			return (ft_strnew(0));
	}
	return (NULL);
}

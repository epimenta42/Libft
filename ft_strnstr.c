/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epimenta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 14:50:27 by epimenta          #+#    #+#             */
/*   Updated: 2016/11/18 20:15:29 by epimenta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] && i < n)
	{
		j = i;
		k = 0;
		while ((big[j] == little[k]) && j < n)
		{
			j++;
			k++;
			if (little[k] == '\0')
				return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}

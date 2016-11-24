/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epimenta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 10:48:50 by epimenta          #+#    #+#             */
/*   Updated: 2016/11/15 12:41:17 by epimenta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s) - 1;
	if (!c)
		return (char *)(s + 1 + i);
	while (s[i] != '\0' && s[i] != c)
		i--;
	if (s[i] == c)
		return (char *)(s + i);
	else
		return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epimenta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 14:30:09 by epimenta          #+#    #+#             */
/*   Updated: 2016/11/22 09:53:55 by epimenta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*add_words(char const *s, char c, int *e)
{
	char	*str;
	int		i;

	if (!(str = (char *)malloc(sizeof(str) * (ft_strlen(s)))))
		return (NULL);
	i = 0;
	while (s[*e] != c && s[*e])
	{
		str[i] = s[*e];
		i++;
		*e += 1;
	}
	str[i] = '\0';
	while (s[*e] == c && s[*e])
		*e += 1;
	return (str);
}

static	int	compt_words(char const *s, char c)
{
	int		i;
	int		interupt;

	interupt = 0;
	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
	{
		if ((s[i] == c) && ((s[i + 1]) != c))
			interupt++;
		i++;
	}
	if (s[0] != '\0')
		interupt++;
	return (interupt);
}

char		**ft_strsplit(char const *s, char c)
{
	int		index;
	int		mots;
	char	**str;
	int		jindex;

	str = NULL;
	index = 0;
	jindex = 0;
	if (!s)
		return (NULL);
	mots = compt_words(s, c);
	if (!(str = (char**)malloc(sizeof(str) * (mots + 2))))
		return (NULL);
	while (s[index] == c && (s[index] != '\0'))
		index++;
	while (jindex < mots && (s[index] != '\0'))
	{
		str[jindex] = add_words(s, c, &index);
		jindex++;
	}
	str[jindex] = NULL;
	return (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johii <johii@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 17:08:52 by johii             #+#    #+#             */
/*   Updated: 2023/05/29 16:17:26 by johii            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	wordc(char *s, char c)
{
	size_t	count;

	count = 0;
	while (*s != '\0')
	{
		if (*s != c)
		{
			count++;
			while (*s != c && *s != '\0')
				s++;
		}
		else
			s++;
	}
	return (count);
}

static size_t	wordlen(char *s, char c)
{
	size_t	len;

	len = 0;
	while (*s != '\0' && *s != c)
	{
		len++;
		s++;
	}
	return (len);
}

char	**ft_split(const char *s, char c)
{
	char	**result;
	char	**temp;

	if (s == NULL)
		return (NULL);
	result = (char **)malloc(sizeof(char *) * (wordc((char *)s, c) + 1));
	if (result != NULL)
	{
		temp = result;
		while (*s != '\0')
		{
			if (*s != c)
			{
				*temp = ft_substr((char *)s, 0, wordlen((char *)s, c));
				temp++;
				s = s + wordlen((char *)s, c);
			}
			else
				s++;
		}
		*temp = NULL;
	}
	return (result);
}

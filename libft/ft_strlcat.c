/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johii <johii@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 18:06:12 by johii             #+#    #+#             */
/*   Updated: 2023/05/25 16:38:57 by johii            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	i;
	size_t	srclen;
	size_t	destlen;

	i = 0;
	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	if (destsize == 0)
		return (srclen);
	if (destlen >= destsize)
		return (srclen + destsize);
	while (src[i] && i < destsize - destlen - 1)
	{
		dest[destlen + i] = src[i];
		i++;
	}
	dest[destlen + i] = '\0';
	return (destlen + srclen);
}

// int	main(void)
// {
// 	char	dest[50] = "water";
// 	char	src[50] = "melon";

// 	printf("%lu\n", ft_strlcat(dest, src, 0)); 
// 	printf("%lu\n", strlcat(dest, src, 0));
// 	printf("%s\n", dest);
// 	printf("%s\n", src);
// }
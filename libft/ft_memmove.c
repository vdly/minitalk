/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johii <johii@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 14:58:10 by johii             #+#    #+#             */
/*   Updated: 2023/05/26 12:52:09 by johii            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;

	d = (char *)dest;
	s = (char *)src;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (s <= d)
	{
		while (n--)
			d[n] = s[n];
	}
	else
		ft_memcpy(d, s, n);
	return (dest);
}

// int	main(void)
// {
// 	char	dest[50] = "water";
// 	char	src[50] = "pineapple";

// 	ft_memmove(dest, src, 40);
// 	printf("%s", dest);
// }
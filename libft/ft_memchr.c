/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johii <johii@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 16:58:42 by johii             #+#    #+#             */
/*   Updated: 2023/05/24 14:41:04 by johii            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*a;

	i = 0;
	a = (const char *)s;
	c = (char)c;
	while (n--)
	{
		if (*a == c)
			return ((void *)a);
		a++;
	}
	return (0);
}

// int	main()
// {
// 	char	*a;
// 	char	c;
// 	a = "apple";
// 	c = 'p';
// 	printf("%s\n", ft_memchr(a, c, 3));
// 	printf("%s\n", memchr(a, c, 3));
// }
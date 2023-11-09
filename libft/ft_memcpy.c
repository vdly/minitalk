/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johii <johii@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 17:02:39 by johii             #+#    #+#             */
/*   Updated: 2023/05/24 19:15:11 by johii            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t count)
{
	char	*x;
	char	*y;
	size_t	i;

	i = 0;
	x = (char *)dest;
	y = (char *)src;
	if (!x && !y)
		return (NULL);
	while (i < count)
	{
		x[i] = y[i];
		i++;
	}
	return (dest);
}
/*
int	main()
{
	char	dest[50] = "watermelon";
	char	src[50] = "pineapple";

	printf("%s", ft_memcpy(dest, src, 5));
}*/
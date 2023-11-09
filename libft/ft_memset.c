/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johii <johii@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 13:44:33 by johii             #+#    #+#             */
/*   Updated: 2023/05/18 15:39:02 by johii            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t count)
{
	char		*x;
	size_t		i;

	i = 0;
	x = (char *)dest;
	while (i < count)
	{
		x[i] = c;
		i++;
	}
	return (x);
}
/*
int	main()
{
	char	dest[50];
	int	c;

	c = 'h';
	printf("%s", ft_memset(dest, c, 15));
}*/ 
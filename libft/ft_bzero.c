/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johii <johii@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 13:15:53 by johii             #+#    #+#             */
/*   Updated: 2023/05/19 20:12:01 by johii            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *dest, size_t count)
{
	char		*c;
	size_t		i;

	i = 0;
	c = (char *)dest;
	while (i < count)
	{
		c[i] = 0;
		i++;
	}
}

// int	main()
// {
// 	char	dest[50];
// 	// char	*c;

// 	// c = "happy";
// 	ft_bzero((void *)dest, 15);
// 	printf("%s", dest);
// }
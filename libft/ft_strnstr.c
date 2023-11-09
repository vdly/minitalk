/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johii <johii@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 20:48:02 by johii             #+#    #+#             */
/*   Updated: 2023/05/26 20:20:05 by johii            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*little == 0)
		return ((char *)big);
	if (len == 0)
		return (0);
	while (big[i] && i < len)
	{
		j = 0;
		while (little[j] == big[i + j] && little[j] && i + j < len)
			j++;
		if (!(little[j]))
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	*big = "apple";
// 	char	*small = "";

// 	printf("%s", ft_strnstr(big, small, -1));
// }

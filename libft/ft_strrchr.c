/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johii <johii@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 16:12:01 by johii             #+#    #+#             */
/*   Updated: 2023/05/25 14:24:31 by johii            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s) + 1;
	while (--i > -1)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
	}
	return (0);
}

/*int	main()
{
	char	*a = "pineapple? applepie!";
	// char	*b = "sea";
	
	// printf("%s\n", strrchr(a,'p'));
	printf("%s\n", ft_strrchr(a,'p'));
}*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johii <johii@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 16:13:04 by johii             #+#    #+#             */
/*   Updated: 2023/05/26 19:59:16 by johii            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;

	ptr = (char *)s;
	while (*ptr)
	{		
		if (*ptr == (char)c)
			return (ptr);
		ptr++;
	}
	if (c == 0)
		return (ptr);
	return (0);
}

// int main()
// {
// 	printf("%s", ft_strchr("A", 256+65));

// 	char *str = "abcdef";
// 	char c = 'c';

// 	printf("\nString after %c is %s\n", c, strchr(str, c));
// 	printf("String after %c is %s\n", c, ft_strchr(str, c));
// }
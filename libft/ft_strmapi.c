/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johii <johii@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 21:00:55 by johii             #+#    #+#             */
/*   Updated: 2023/05/25 20:36:04 by johii            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*temp;

	i = 0;
	if (!s || !f)
		return (NULL);
	temp = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!temp)
		return (NULL);
	while (s[i])
	{
		temp[i] = f(i, s[i]);
		i++;
	}
	temp[i] = '\0';
	return (temp);
}

// char	ft_toower(unsigned int c, char b)
// {
// 	if (b >= 65 && b <= 90)
// 		b = b + 32;
// 	return (b);
// }

// int	main()
// {
// 	printf("%s", ft_strmapi("HELLO", ft_toower));
// }
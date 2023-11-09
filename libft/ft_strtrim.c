/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johii <johii@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 14:15:57 by johii             #+#    #+#             */
/*   Updated: 2023/05/29 17:38:30 by johii            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	len;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	len = ft_strlen(s1);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (ft_strchr(set, s1[len - 1]) && len - 1 >= 0)
		len--;
	if (i >= len)
		return (ft_strdup(""));
	return (ft_substr(s1, i, len - i));
}

// int	main()
// {
// 	char	str[] = "        ";
// 	char	set[] = " ";

// 	printf("test:%s|\n", ft_strtrim(str, set));
// }
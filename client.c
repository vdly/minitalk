/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johii <johii@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:39:46 by johii             #+#    #+#             */
/*   Updated: 2023/11/08 20:53:03 by johii            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <signal.h>

void	send_str(pid_t pid, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		send_char(pid, str[i]);
		i++;
	}
	send_char(pid, '\0');
}

void	send_char(pid_t pid, char c)
{
	int		bit_pos;
	char	bit_holder;

	bit_pos = 0;
	while (i < 8)
	{
		bit_holder = (c >> (7 - bit_pos)) & 1;
		if (bit_holder == 0)
			kill(pid, SIGUSR2);
		else
			kill(pid, SIGUSR1);
		i++;
	}
}

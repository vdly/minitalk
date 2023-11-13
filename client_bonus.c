/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johii <johii@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 19:24:19 by johii             #+#    #+#             */
/*   Updated: 2023/11/13 20:17:36 by johii            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/ft_printf/ft_printf.h"
#include "libft/libft.h"
#include <signal.h>

void	char_send(pid_t pid, char c)
{
	int		bit_pos;
	char	bit_holder;

	bit_pos = 0;
	while (bit_pos < 8)
	{
		bit_holder = (c >> (7 - bit_pos)) & 1;
		if (bit_holder == 0)
			kill(pid, SIGUSR2);
		else
			kill(pid, SIGUSR1);
		bit_pos++;
		usleep(100);
	}
}

void	str_send(pid_t pid, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		char_send(pid, str[i]);
		i++;
	}
	char_send(pid, '\0');
}

int	pid_check(char *if_pid)
{
	int	i;

	i = 0;
	while (if_pid[i] != '\0')
	{
		if (if_pid[i] < '0' || if_pid[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

void	signal_handler(int signo)
{
	if (signo == SIGUSR1)
		ft_printf("\n°•. ✿ .•°sent!!°•. ✿ .•°\n\n");
}

int	main(int argc, char **argv)
{
	signal(SIGUSR1, signal_handler);
	if (argc == 3 && pid_check(argv[1]))
	{
		str_send(ft_atoi(argv[1]), "٩(ˊᗜˋ*)و♡ new message! ♡٩(ˊᗜˋ*)و :");
		str_send(ft_atoi(argv[1]), argv[2]);
	}
	else
	{
		ft_printf("  ∩     ∩\n");
		ft_printf(" ( •̀ - •́ ) wrong.... \n");
		ft_printf("૮         ა use format below!!\n");
		ft_printf("<./client> <PID> <message>\n");
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johii <johii@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 20:19:40 by johii             #+#    #+#             */
/*   Updated: 2023/11/15 18:02:42 by johii            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/ft_printf/ft_printf.h"
#include "libft/libft.h"
#include <signal.h>

void	sig_handler(int signo, siginfo_t *info, void *context)
{
	static int	bit_pos;
	static char	bit_holder;

	(void)context;
	bit_pos++;
	bit_holder |= (signo == SIGUSR1);
	if (bit_pos == 8)
	{
		if (bit_holder == '\0')
		{
			kill(info->si_pid, SIGUSR1);
			ft_printf("\n");
		}
		else
			ft_printf("%c", bit_holder);
		bit_pos = 0;
		bit_holder = 0;
	}
	else
		bit_holder = bit_holder << 1;
}

void	miniheader(int num)
{
	ft_printf("\n˚₊‧꒰ა ☆ ໒꒱ ‧₊˚˚₊‧꒰ა ☆ ໒꒱ ‧₊˚˚₊‧꒰ა ☆ ໒꒱ ‧₊˚\n");
	ft_printf("		mini mini mintalk\n");
	ft_printf("˚₊‧꒰ა ☆ ໒꒱ ‧₊˚˚₊‧꒰ა ☆ ໒꒱ ‧₊˚˚₊‧꒰ა ☆ ໒꒱ ‧₊˚\n");
	ft_printf("server pid : %d\n\n", num);
}

int	main(void)
{
	struct sigaction	my_sig;

	miniheader(getpid());
	my_sig.sa_sigaction = sig_handler;
	sigemptyset(&my_sig.sa_mask);
	my_sig.sa_flags = SA_SIGINFO;
	sigaction(SIGUSR1, &my_sig, 0);
	sigaction(SIGUSR2, &my_sig, 0);
	while (1)
		pause();
	return (0);
}

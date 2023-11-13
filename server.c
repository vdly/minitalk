/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johii <johii@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:38:46 by johii             #+#    #+#             */
/*   Updated: 2023/11/13 21:27:28 by johii            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/ft_printf/ft_printf.h"
#include "libft/libft.h"
#include <signal.h>

void	sig_handler(int signo, siginfo_t *info, void *context)
{

}

int	main(void)
{
	struct sigaction	my_sig;

	pid(getpid());
	my_sig.sa_sigaction = sig_handler;
	sigemptyset(my_sig.sa_mask);
	my_sig.sa_flags = SA_SIGINFO;
	sigaction(SIGUSR1, &my_sig, 0);
	sigaction(SIGUSR2, &my_sig, 0);
	while (1)
		pause();
	return (0);
}

void	pid(int num)
{
	ft_printf("˚₊‧꒰ა ☆ ໒꒱ ‧₊˚˚₊‧꒰ა ☆ ໒꒱ ‧₊˚˚₊‧꒰ა ☆ ໒꒱ ‧₊˚\n");
	ft_printf("	mini mini mintalk\n");
	ft_printf("˚₊‧꒰ა ☆ ໒꒱ ‧₊˚˚₊‧꒰ა ☆ ໒꒱ ‧₊˚˚₊‧꒰ა ☆ ໒꒱ ‧₊˚\n");
	ft_printf("server pid : %d\n", num);
}

//by assigning sa_sigaction u could use a custom function
//originally, there are already other members other than your own function

//description of the other members of the sigaction structure:
//sa_mask: specifies which signals is currently blocked from receiving.
//sa_flags: specifies additional behavior for the signal handler.
//sa_restorer: called to restore the signal mask after it has been called.

//sigemptyset set the specific memners to (null)
//setting sa_mask to (null) so no sinals will be blocked

//SA_FLAGS?
//SA_SIGINFO flag can be used to specify that the signal handler should be 
//called with a siginfo_t structure instead of just the signal number.

//even if you will not be using 'siginfo_t *info', you would still have to
//initialize it, because the program would stop running

//WHY while(1) pause();?
//the while(1) loop ensures that the program repeatedly calls the pause()
//function, effectively keeping the server in a state where it is constantly
//waiting for signals. This makes the server responsive to incoming requests
//and allows it to continuously receive and process messages from clients.
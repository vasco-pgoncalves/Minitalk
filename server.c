/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vascopinto <vascopinto@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 17:14:41 by vpinto-g          #+#    #+#             */
/*   Updated: 2026/01/06 19:06:16 by vascopinto       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	signal_handler(int signum, siginfo_t *s_info, void *context)
{
	static unsigned char	c = 0;
	static int				bit = 0;
	int						mask;
	int						pid;

	(void)context;
	pid = s_info->si_pid;
	mask = 1 << (7 - bit);
	if (signum == SIGUSR2)
		c |= mask;
	if (bit++ == 7)
	{
		if (c == 0)
			ft_printf("\n");
		else
			ft_printf("%c", c);
		bit = 0;
		c = 0;
	}
	if (kill(pid, SIGUSR1) == -1)
		exit(EXIT_FAILURE);
}

int	main(void)
{
	t_sigaction	sa_sig;

	sigemptyset(&sa_sig.sa_mask);
	sigaddset(&sa_sig.sa_mask, SIGINT);
	sigaddset(&sa_sig.sa_mask, SIGQUIT);
	sa_sig.sa_handler = 0;
	sa_sig.sa_flags = SA_SIGINFO;
	sa_sig.sa_sigaction = signal_handler;
	sigaction(SIGUSR1, &sa_sig, NULL);
	sigaction(SIGUSR2, &sa_sig, NULL);
	ft_printf("PID: %d\n", getpid());
	while (1)
		pause();
}

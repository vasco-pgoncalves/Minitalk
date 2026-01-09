/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vascopinto <vascopinto@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 19:13:39 by vascopinto        #+#    #+#             */
/*   Updated: 2026/01/06 19:13:57 by vascopinto       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	send_error(char *message, int pid, int sig)
{
	if (sig == SIGUSR1)
		ft_printf("Error: Sending SIGUSR1 signal to PID %i failed\n", pid);
	else if (sig == SIGUSR2)
		ft_printf("Error: Sending SIGUSR2 signal to PID %i failed\n", pid);
	else
		ft_printf("Error: Sending unknown signal to PID %i\n", pid);
	if (message)
	{
		free(message);
	}
	exit(1);
}

int	send_null(int pid, char *message)
{
	static int	index = 0;

	if (index++ != BIT)
	{
		if (kill(pid, SIGUSR1) == SIG_ERROR)
			send_error(message, pid, SIGUSR1);
		return (0);
	}
	return (1);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vascopinto <vascopinto@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 17:45:36 by vascopinto        #+#    #+#             */
/*   Updated: 2026/01/03 18:03:27 by vascopinto       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"
void send_bit()
{
	
}
int send_sig(int pid, char *message)
{
	
}
void handle_sig(signum)
{
	
}
int main (int argc, char *argv[])
{
	if (argc != 3)
	{
		ft_printf("Error : incorrect number of arguments\n");
		ft_printf("Try : %s <PID> \" <MESSAGE>\"\n", argv[0]);
		exit(1);
	}
	signal(SIGUSR1, &handle_sig);
	signal(SIGUSR2, &handle_sig);
	if(!atoi(argv[1]))
	{
		ft_printf("Error: %s is an incorrect PID\n", argv[1]);
		exit(1);
	}
	send_sig(ft_atoi(argv[1]), argv[2]);
	while(1)
		pause();
}
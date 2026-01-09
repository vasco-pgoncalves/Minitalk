/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vascopinto <vascopinto@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 19:30:48 by vascopinto        #+#    #+#             */
/*   Updated: 2026/01/06 19:16:05 by vascopinto       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

#define _POSIX_C_SOURCE 200809L

# include <signal.h>
# include "libft/libft.h"
# include "ft_printf/ft_printf.h"

# define SIG_ERROR -1
#define BIT 8

typedef struct sigaction t_sigaction;

void			send_error(char *message, int pid, int sig);
int				send_null(int pid, char *message);
void			signal_handler(int signum, siginfo_t *s_info, void *context);
static	void	send_bit(char *msg, int s_pid, int bits);
int				send_message(int pid, char *str);
void			handle_signals(int sig);

#endif
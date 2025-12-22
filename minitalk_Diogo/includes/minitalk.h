/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpinto-g <vpinto-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 13:39:43 by dviegas           #+#    #+#             */
/*   Updated: 2025/12/22 15:48:37 by vpinto-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

#define _POSIX_C_SOURCE 200809L

# include <signal.h>
# include "../libft/ft_printf/ft_printf.h"
# include "../libft/libft.h"

# define BIT 8
# define SIG_ERROR -1

typedef struct sigaction t_sigaction;
t_sigaction sa_sig;

void	send_error(char *message, int pid, int sig);
void	handler_sig(int sig);
int		send_message(int pid, char *str);
int		send_null(int pid, char *message);

#endif

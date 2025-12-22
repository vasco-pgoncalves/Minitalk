/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dviegas <dviegas@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 14:07:17 by dviegas           #+#    #+#             */
/*   Updated: 2025/05/06 14:50:50 by dviegas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdint.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printchar(int c);
int		ft_formats(va_list args, const char format);
int		ft_printf(const char *format, ...);
void	ft_putstr(char const *str);
int		ft_printstr(char *str);
int		ft_printnbr(int n);
int		ft_printpercent(void);
int		ft_ptr_len(uintptr_t num);
void	ft_put_ptr(uintptr_t num);
int		ft_print_ptr(uintptr_t ptr);
size_t	count_digits(long int nb);
void	ft_putchar_fd(char c, int fd);
char	*ft_itoa(int n);
int		ft_print_unsigned(unsigned int n);
char	*ft_uitoa(unsigned int n);
int		ft_num_len(unsigned int num);
int		ft_hex_len(unsigned int num);
void	ft_put_hex(unsigned int num, const char format);
int		ft_print_hex(unsigned int num, const char format);

#endif
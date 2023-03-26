/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jledesma <jledesma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 19:01:54 by jledesma          #+#    #+#             */
/*   Updated: 2022/08/19 12:34:57 by jledesma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_all(const char *str, int *i, va_list args, int x)
{
	if (str[x + 1] == 'c')
		ft_printf_char(va_arg(args, int), i);
	else if (str[x + 1] == 's')
		ft_printf_str(va_arg(args, char *), i);
	else if (str[x + 1] == 'p')
		ft_printf_ptr(va_arg(args, unsigned long long), i);
	else if (str[x + 1] == 'd' || str[x + 1] == 'i')
		ft_printf_int(va_arg(args, int), i);
	else if (str[x + 1] == 'u')
		ft_printf_uint(va_arg(args, unsigned int), i);
	else if (str[x + 1] == 'x')
		ft_printf_hex(va_arg(args, unsigned int), i, "0123456789abcdef");
	else if (str[x + 1] == 'X')
		ft_printf_hex(va_arg(args, unsigned int), i, "0123456789ABCDEF");
	else if (str[x + 1] == '%')
		ft_printf_char('%', i);
}



int	ft_printf(char const *str, ...)
{
	va_list	args;
	int		i;
	int		j;

	i = 0;
	j = 0;
	va_start(args, str);
	while (str[j])
	{
		if (str[j] == '%')
		{
			ft_print_all(str, &i, args, j);
			j++;
		}
		else
			ft_putchar_i(str[j], &i);
		j++;
	}
	va_end(args);
	return (i);
}

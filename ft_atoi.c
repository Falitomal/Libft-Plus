/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jledesma <jledesma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 19:43:13 by jledesma          #+#    #+#             */
/*   Updated: 2022/05/16 20:02:32 by jledesma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
** Funcion ft_isspace elimina espacios, salto de lineas,
** tabulaciones etc, diversos caracteres ascii
*/
static int	ft_isspace(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}

/* 
** Funcion ft_overflow determina que el numero no desbode por numero maximo
** chequea que sea maximo negativo o positivo
*/

int	ft_overflow(int res, int sign)
{
	if (res > 0 && sign < 0)
		return (0);
	if (res < 0 && sign > 0)
		return (-1);
	return (res);
}
/* 
** Funcion ft_atoi replica la funcion original con el mismo tratamiento
** de signos y usando la eliminacion de caracteres especiales con ft_isspace
*/

int	ft_atoi(const char *str)
{
	int		sign;
	int		i;
	int		res;

	i = 0;
	res = 0;
	sign = 1;
	while (ft_isspace(str[i]))
		i++;
	if (!str)
		return (0);
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = ((res * 10) + (str[i] - '0'));
		i++;
	}
	res *= sign;
	return (ft_overflow(res, sign));
}

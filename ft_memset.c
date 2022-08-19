/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jledesma <jledesma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 12:42:11 by jledesma          #+#    #+#             */
/*   Updated: 2022/04/23 20:32:41 by jledesma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** function void *memset(void *str, int c, size_t n) copies
** the character c (an unsigned char) to the first n characters
** of the string pointed to, by the argument str.
*/

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*i;

	i = (unsigned char *)str;
	while (n > 0)
	{
		*(i++) = (unsigned char)c;
		n--;
	}
	return (str);
}

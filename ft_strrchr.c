/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jledesma <jledesma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 20:56:56 by jledesma          #+#    #+#             */
/*   Updated: 2022/04/27 12:37:29 by jledesma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** searches for the last occurrence of the character c (an unsigned char)
** in the string pointed to, by the argument str
*/

char	*ft_strrchr(const char *str, int c)
{
	char	*last;

	last = (char *)str + ft_strlen(str);
	while (str <= last)
	{
		if (*last == (unsigned char)c)
			return (last);
		last--;
	}
	return (0);
}

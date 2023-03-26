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
	size_t len;
	len = ft_strlen(str);
	char *s = (char *)(str + len);
	while (s >= str)
	{
		if (*s == (char)c)
			return (s);
		s--;
	}
	return (NULL);
}

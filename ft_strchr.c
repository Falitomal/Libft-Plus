/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jledesma <jledesma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 20:30:08 by jledesma          #+#    #+#             */
/*   Updated: 2022/05/13 11:41:45 by jledesma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Searches for the first occurrence of the character c (an unsigned char)
** in the string pointed to by the argument str
*/

char	*ft_strchr(const char *str, int c)
{
	while (*str && *str != (unsigned char)c)
	str++;
	if (*str == (unsigned char)c)
		return ((char *)str);
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jledesma <jledesma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 15:02:56 by jledesma          #+#    #+#             */
/*   Updated: 2022/04/26 12:30:24 by jledesma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The strnstr() function locates the	first occurrence of the	null-termi-
**     nated string light in the	string big,
**			where not more than	len characters
**     are searched.  Characters that appear after a `\0'	character are not
**     searched.
*/

char	*ft_strnstr(const char *big, const char *light, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	if (light[0] == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (big[i + j] == light[j] && (i + j) < len)
		{
			if (light[j + 1] == '\0')
				return ((char *)big + i);
			j++;
		}
		i++;
	}
	return (0);
}

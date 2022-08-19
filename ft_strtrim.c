/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jledesma <jledesma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 19:50:50 by jledesma          #+#    #+#             */
/*   Updated: 2022/05/13 13:35:25 by jledesma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Delete all characters of strings "set"
** from the beginning and the end of "s1" until found
** character to "set" and copy the result with malloc
*/

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	start;
	int		end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1) - 1;
	if (*s1 && *set)
	{
		while (s1[start] && ft_strchr(set, s1[start]))
		start++;
		while (end >= (int)start && ft_strchr(set, s1[end]))
		end--;
	}
	str = ft_calloc(end - start + 2, sizeof (char));
	if (str)
		ft_memcpy(str, &s1[start], end - start + 1);
	return (str);
}

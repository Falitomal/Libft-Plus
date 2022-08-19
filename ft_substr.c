/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jledesma <jledesma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 16:05:14 by jledesma          #+#    #+#             */
/*   Updated: 2022/04/27 13:57:02 by jledesma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** this function reserve in memory with malloc and return a substring
** this string have a start and lenght
*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	if (!s)
		return (NULL);
	i = ft_strlen(s);
	if (start >= i)
		start = i;
	if (i - start < len)
		len = i - start;
	str = (char *)malloc(sizeof(char) * len + 1);
	if (str)
	{
		ft_memcpy(str, (void *)&s[start], len);
		str[len] = '\0';
	}
	return (str);
}

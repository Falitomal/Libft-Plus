/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jledesma <jledesma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 16:08:22 by jledesma          #+#    #+#             */
/*   Updated: 2022/05/13 11:20:43 by jledesma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**This function reserve in memory, a new string with s1 and s2
*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	i;
	size_t	x;

	if (!s1)
		s1 = (char *)malloc (1 * sizeof(char));
	if (!s1 || !s2)
		return (NULL);
	res = malloc(sizeof (char) * ((ft_strlen(s1) + ft_strlen(s2)) + 1));
	if (res == NULL)
		return (NULL);
	i = -1;
	x = 0;
	if (s1)
		while (s1[++i] != '\0')
			res[i] = s1[i];
	while (s2[x] != '\0')
		res[i++] = s2[x++];
	res[i++] = '\0';
	return (res);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jledesma <jledesma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 12:34:25 by jledesma          #+#    #+#             */
/*   Updated: 2022/05/09 12:24:18 by jledesma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Function is used to duplicate a string
** a copy of source is created dynamically
** and pointer to copy is returned.
*/

char	*ft_strdup(const char *s)
{
	char	*st1;
	int		len;
	int		i;

	i = 0;
	len = 0;
	while (s[len])
	len++;
	st1 = malloc(sizeof(char) * (len + 1));
	if (!st1)
		return (NULL);
	while (s[i])
	{
		st1[i] = s[i];
		i++;
	}
	st1[i] = '\0';
	return (st1);
}

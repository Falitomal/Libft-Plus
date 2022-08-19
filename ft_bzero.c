/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jledesma <jledesma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 18:18:23 by jledesma          #+#    #+#             */
/*   Updated: 2022/04/23 15:12:53 by jledesma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**function erases the data in the n bytes of the memory
**starting at the location pointed to by s, by writing zeros
** (bytes  containing '\0') to that area.
*/

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*str;

	str = s;
	i = 0;
	while (i != n)
	{
		str[i] = '\0';
		i++;
	}
}

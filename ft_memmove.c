/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jledesma <jledesma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 18:17:18 by jledesma          #+#    #+#             */
/*   Updated: 2022/04/24 21:54:10 by jledesma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**copies n characters from str2 to str1, but for
** overlapping memory blocks, memmove() is a safer approach than memcpy()
*/

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)str1;
	s = (unsigned char *)str2;
	if (d == s)
		return (str1);
	if (d < s && (str1 || str2))
		ft_memcpy(str1, str2, n);
	else
	{
		while (n > 0)
		{
			d[n - 1] = s[n - 1];
			n--;
		}
	}
	return (str1);
}

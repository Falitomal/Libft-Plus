/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jledesma <jledesma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 17:47:06 by jledesma          #+#    #+#             */
/*   Updated: 2022/04/23 15:27:22 by jledesma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** function tests if a given character, in the current locale,
** can be represented as a valid 7–bit US-ASCII character
*/

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	return (0);
}

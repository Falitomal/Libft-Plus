/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jledesma <jledesma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 13:49:34 by jledesma          #+#    #+#             */
/*   Updated: 2022/08/19 12:27:32 by jledesma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* 
** Funcion ft_read_str aloja en memoria hasta el salto de linea 
** si la lectura de fila es correcta
*/
char	*ft_read_str(int fd, char *str)
{
	char	*buff;
	int		rd_bytes;

	buff = malloc((1000 + 1) * sizeof(char));
	if (!buff)
		return (NULL);
	rd_bytes = 1;
	while (!ft_strchr_get(str, '\n') && rd_bytes != 0)
	{
		rd_bytes = read(fd, buff, 1000);
		if (rd_bytes == -1)
		{
			free(buff);
			free(str);
			return (NULL);
		}
		buff[rd_bytes] = '\0';
		str = ft_strjoin_get(str, buff);
	}
	free(buff);
	return (str);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*str[4096];

	if (fd < 0 || 1000 <= 0)
		return (0);
	str[fd] = ft_read_str(fd, str[fd]);
	if (!str[fd])
		return (0);
	line = ft_get_line(str[fd]);
	str[fd] = ft_new_line(str[fd]);
	return (line);
}

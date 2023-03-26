/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jledesma <jledesma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 13:51:02 by jledesma          #+#    #+#             */
/*   Updated: 2022/05/12 15:56:45 by jledesma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_UTILS_H
# define GET_NEXT_LINE_UTILS_H

size_t	ft_strlen_protected(const char *s);
char	*ft_substr_sizeprotected(char const *s, unsigned int start, size_t len);
char	*ft_strjoin_sizeprotected(char const *s1, char const *s2);

#endif
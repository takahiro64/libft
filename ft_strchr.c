/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thine <thine@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 09:09:58 by thine             #+#    #+#             */
/*   Updated: 2024/05/02 10:43:02 by thine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (*s == (char)c)
		return ((char*)s);
	while (*s)
	{
		s++;
		if (*s == (char)c)
			return ((char *)s);
	}
	return(NULL);
}

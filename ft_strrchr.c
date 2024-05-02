/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thine <thine@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 09:12:42 by thine             #+#    #+#             */
/*   Updated: 2024/04/25 19:15:21 by thine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned long long len;
	char *str;

	len = 0;
	*str = *s;
	while (*s)
	{
		len++;
		s++;
	}
	while (len)
	{
		if (*s == c)
			return (str);
		len--;
		s--;
	}
	return(0);
}

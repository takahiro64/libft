/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thine <thine@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 09:33:04 by thine             #+#    #+#             */
/*   Updated: 2024/05/02 13:18:45 by thine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned long long	i;
	unsigned long long	j;
	char				*dst;
	char				*src;

	i = 0;
	dst = (char *)haystack;
	src = (char *)needle;
	if (!*src)
		return (dst);
	while (dst[i] && i < len)
	{
		if (dst[i] == src[0])
		{
			j = 0;
			while (dst[i + j] == src[j])
			{
				if (i + j > len)
					return (NULL);
				j++;
				if (src[j])
					return (&dst[i]);
			}
		}
		i++;
	}
	return (NULL);
}

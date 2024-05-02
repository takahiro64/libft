/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thine <thine@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 05:46:26 by thine             #+#    #+#             */
/*   Updated: 2024/04/25 15:00:51 by thine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcpy(char	*restrict dst, const char *restrict src, size_t dstsize)
{
	unsigned long long	len;
	
	len = 0;
	while (src[len])
		len++;
	while (--dstsize > 0 && *src)
		*dst++ = *src++;
	*dst = 0;
	return (len);
}

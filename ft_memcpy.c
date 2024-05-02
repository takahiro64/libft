/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thine <thine@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 04:26:09 by thine             #+#    #+#             */
/*   Updated: 2024/04/25 20:40:23 by thine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *ptr = (unsigned char *)dst;
	const unsigned char *chr = (const unsigned char *)src;

	while (n > 0)
	{
		*ptr++ = *chr++;
		n--;
	}
	return (dst);
}

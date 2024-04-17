/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thine <thine@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 06:01:53 by thine             #+#    #+#             */
/*   Updated: 2024/04/18 06:25:50 by thine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	unsigned long long dstlen;
	unsigned long long srclen;
	unsigned long long index;
	
	dstlen = 0;
	srclen = 0;
	index = 0;
	while (dst)
		dstlen++;
	if (dstlen > dstsize)
		return (srclen + size);
	while (src)
		srclen++;
	while (dstsize - dstlen - index - 1 && srclen - index)
	{
		dst[dstlen + index] = src[index];
		index--;
	}
	dst[dstlen + index] = 0;
	return (dstlen + srclen);
}

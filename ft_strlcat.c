/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thine <thine@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 06:01:53 by thine             #+#    #+#             */
/*   Updated: 2024/05/02 12:03:36 by thine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t dstlen;
	size_t srclen;
	size_t index;
	
	dstlen = 0;
	srclen = 0;
	index = 0;
	while (dst[dstlen])
		dstlen++;
	while (src[srclen])
		srclen++;
	if (dstlen >= dstsize)
		return (srclen + dstsize);
	while (dstsize - dstlen - index - 1 > 0 && srclen - index > 0)
	{
		dst[dstlen + index] = src[index];
		index++;
	}
	dst[dstlen + index] = 0;
	return (dstlen + srclen);
}

// int main(){
// 	char	*src = "AAAAAAA";
// 	char	dest[30];
// 	int		i;
// 	for (i=0;i<30;i++){
// 		dest[i] = 0;
// 		if (i < 4)
// 			dest[i] = 'B';
// 	}
// 	printf("%zu : %s\n",ft_strlcat(dest,src,6), dest);
// 	for (i=0;i<30;i++){
// 		dest[i] = 0;
// 		if (i < 4)
// 			dest[i] = 'B';
// 	}
// 	printf("%zu : %s\n",strlcat(dest,src,6), dest);
// }

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
#include"libc.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*dst;
	char	*src;

	i = 0;
	dst = (char *)haystack;
	src = (char *)needle;
	if (!dst && !len)
		return (NULL);
	if (!*src)
		return (dst);
	while (dst[i] && i < len)
	{
		if (dst[i] == src[0])
		{
			j = 0;
			while (dst[i + j] == src[j])
			{
				j++;
				if (i + j > len)
					return (NULL);
				if (!src[j])
					return (&dst[i]);
			}
		}
		i++;
	}
	return (NULL);
}
// int main(){
// 	char *src1 = calloc(100, sizeof(char));
// 	char *src2 = calloc(100, sizeof(char));
// 	for (int i = 0; i < 99; i++)
// 	{
// 		src1[i] = i + 1;
// 		src2[i] = i + 1;
// 	}
// 	printf("ft_strnstr : %s\n",ft_strnstr(NULL,src1,0));
// 	printf("   strnstr : %s\n",strnstr(NULL,src2,0));
// }

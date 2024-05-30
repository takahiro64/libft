/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thine <thine@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 19:38:02 by thine             #+#    #+#             */
/*   Updated: 2024/05/30 21:10:48 by thine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include"libft.h"

char	*ft_strjoin(char const *s1, char const *s2);

static void ft_strcat(char *s1, const char *s2, size_t len)
{
	while (len)
	{
		*s1 = *s2;
		s2++;
		s1++;
		len--;
	}
	*s1=0;
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	char	*str;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	str = s1;
	s1 = (char *)ft_calloc(sizeof(char), len1 + len2 + 1);
	if (!str)
		return (NULL);
	ft_strcat((char *)s1, str, len1);
	ft_strcat((char *)&s1[len1], s2, len2);
	return (s1);
}

// int	main(void)
// {
// 	printf("%s:%s\n",ft_strjoin("hello", "world"), "helloworld");
// 	printf("%s:%s\n",ft_strjoin("", "world"), "world");
// 	printf("%s:%s\n",ft_strjoin("hello", ""), "hello");
// 	printf("%s:%s\n",ft_strjoin("", ""), "");
// }
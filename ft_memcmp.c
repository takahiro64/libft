/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thine <thine@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 09:28:20 by thine             #+#    #+#             */
/*   Updated: 2024/04/25 19:33:50 by thine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_memcmp(const  void *s1, const void *s2, size_t n)
{
	unsigned char *str1;
	unsigned char *str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while(n)
	{
		if (*str1 - *str2)
			return (*str1 - *str2);
		else if (*str1 == 0 && *str2 == 0)
			return (0);
		n--;
		str1++;
		str2++;
	}
	return (0);
}

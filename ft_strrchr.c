/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thine <thine@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 09:12:42 by thine             #+#    #+#             */
/*   Updated: 2024/04/18 09:15:32 by thine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	unsigned long long len;

	len = 0;
	while (*s)
	{
		len++;
		s++;
	}
	while (len)
	{
		if (*s == c)
			return (s);
		len--;
		s--;
	}
	return(0);
}

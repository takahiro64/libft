/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thine <thine@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 04:18:25 by thine             #+#    #+#             */
/*   Updated: 2024/04/25 18:40:35 by thine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	unsigned char *str = (unsigned char*)b;

	i = 0;
	while (i < len)
	{
		*str++ = (unsigned char) c;
		i++;
	}
	return (b);
}

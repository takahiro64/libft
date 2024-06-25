/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thine <thine@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 18:43:20 by thine             #+#    #+#             */
/*   Updated: 2024/06/25 16:05:57 by thine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<stdio.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*pmem;

	if (count == 0 || size == 0)
		return (malloc(0));
	if (size && count >= SIZE_MAX / size)
		return (NULL);
	pmem = malloc(count * size);
	if (!pmem)
		return (NULL);
	ft_bzero(pmem, count * size);
	return (pmem);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thine <thine@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 18:43:20 by thine             #+#    #+#             */
/*   Updated: 2024/06/22 16:50:26 by thine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<stdio.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*pmem;

	if (size == 0 || count == 0)
		return (malloc(1));
	if (count >= SIZE_MAX / size)
		return (NULL);
	pmem = malloc(count * size);
	if (!pmem)
		return (NULL);
	ft_bzero(pmem, count * size);
	return (pmem);
}

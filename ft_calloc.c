/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thine <thine@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 18:43:20 by thine             #+#    #+#             */
/*   Updated: 2024/05/03 21:02:58 by thine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<stdio.h>

void *ft_calloc(size_t count, size_t size)
{
	void *pmem;

	if (count >= SIZE_MAX / size || size >= SIZE_MAX / count)
		return (NULL);
	if (!size || !count)
	{
		size = 1;
		count = 1;
	}
	printf("count*size = ");
	pmem = malloc(count*size);
	if (!pmem)
		return (NULL);
	ft_bzero(pmem,count*size);
	return (pmem);
}

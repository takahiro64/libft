/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thine <thine@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 20:54:56 by thine             #+#    #+#             */
/*   Updated: 2024/06/22 11:44:43 by thine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<stdio.h>

char	*ft_itoa(int n);

long	count_digit(long n)
{
	int	digit;

	digit = 0;
	if (n < 0)
	{
		n = -n;
		digit++;
	}
	while (n > 0)
	{
		n /= 10;
		digit++;
	}
	return (digit);
}

static char	*is_zero(void)
{
	char	*res;

	res = (char *)malloc(sizeof(char) * 2);
	if (!res)
		return (NULL);
	res[0] = '0';
	res[1] = 0;
	return (res);
}

char	*ft_itoa(int n)
{
	char	*res;
	long	nb;
	int		i;

	if (n == 0)
		return (is_zero());
	nb = (long) n;
	i = count_digit(nb);
	res = (char *)ft_calloc(i + 1, sizeof(char));
	if (!res)
		return (NULL);
	if (nb < 0)
	{
		*res = '-';
		nb = -nb;
	}
	res[i--] = 0;
	while (nb > 0)
	{
		res[i--] = nb % 10 + '0';
		nb /= 10;
	}
	return (res);
}

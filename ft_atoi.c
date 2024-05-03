/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thine <thine@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 10:27:22 by thine             #+#    #+#             */
/*   Updated: 2024/05/03 11:50:20 by thine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_isSpace(char c)
{
	if (c == ' ' || (c > 8 && c < 14))
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	char	*st;
	unsigned long long int		num;
	unsigned long long int		min_num;
	unsigned long long int		max_num;
	int		sign;

	st = (char *)str;
	num = 0;
	sign = 1;
	min_num = 9223372036854775808;
	max_num = 9223372036854775807;
	while (ft_isSpace(*st))
		st++;
	if (*st == '+')
		st++;
	else if (*st == '-')
	{
		st++;
		sign = -1;
	}
	while (*st)
	{
		if (*st < '0' || *st > '9')
			return (num * sign);
		num = num * 10 + *st - '0';
		if (num > min_num && sign == -1)
			return (0);
		else if (num > max_num && sign == 1)
		st++;
	}
	return (num * sign);
}
// #include<stdio.h>
// int	main()
// {
// 	char	*num1="-9223372036854775807";
// 	char	*num2="-9223372036854775808";
// 	char	*num3="-9223372036854775809";
// 	printf("num1=-9223372036854775807\n");
// 	printf("ft_atoi:%lu\n",ft_atoi(num1));
// 	printf("   atoi:%lu\n",atoi(num1));
// 	printf("num2=-9223372036854775808\n");
// 	printf("ft_atoi:%lu\n",ft_atoi(num2));
// 	printf("   atoi:%lu\n",atoi(num2));
// 	printf("num3=-9223372036854775809\n");
// 	printf("ft_atoi:%lu\n",ft_atoi(num3));
// 	printf("   atoi:%lu\n",atoi(num3));
// }

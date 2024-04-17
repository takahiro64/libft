/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thine <thine@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 01:54:27 by thine             #+#    #+#             */
/*   Updated: 2024/04/18 02:05:06 by thine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int i)
{
	if (('A' <= i && 'Z' >= i) || ('a' <= i && 'z' >= i))
		return (1);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thine <thine@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 17:32:38 by thine             #+#    #+#             */
/*   Updated: 2024/06/22 17:39:52 by thine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*tmp;

	res = NULL;
	while (lst)
	{
		tmp = ft_lstnew(f(lst->content));
		if (!tmp)
		{
			ft_lstclear(&res, (*del));
			return (res);
		}
		ft_lstadd_back(&res, tmp);
		lst = lst->next;
	}
	return (res);
}

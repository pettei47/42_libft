/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teppei <teppei@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 08:57:43 by tkitagaw          #+#    #+#             */
/*   Updated: 2021/02/07 02:10:48 by teppei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **l, t_list *n)
{
	while (*l != NULL)
		l = &((*l)->next);
	*l = n;
}

#include <stdio.h>
int		main()
{
	t_list	*l;
	t_list	*l0;

	l = ft_lstnew("aa");
	l0 = ft_lstnew("b");
	ft_lstadd_back(&l, l0);
	printf("%s\n", l->next->content);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teppei <teppei@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 22:11:30 by tkitagaw          #+#    #+#             */
/*   Updated: 2021/06/14 14:49:45 by teppei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*p;
	unsigned char	*q;
	size_t			i;

	p = (unsigned char *)dst;
	q = (unsigned char *)src;
	i = 0;
	if (dst == src)
		return (dst);
	while (n > 0)
	{
		*p++ = *q++;
		n--;
	}
	return (dst);
}

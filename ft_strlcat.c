/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teppei <teppei@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 20:09:06 by tkitagaw          #+#    #+#             */
/*   Updated: 2021/02/07 01:20:25 by teppei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	szdst;
	size_t	lendst;
	size_t	i;

	szdst = ft_strlen(dest);
	lendst = szdst;
	i = 0;
	if (size <= szdst)
		return (ft_strlen(src) + size);
	while (i < size - lendst - 1 && src[i])
	{
		dest[szdst] = src[i];
		i++;
		szdst++;
	}
	dest[szdst] = '\0';
	return (szdst + ft_strlen(src) - i);
}

#include <stdio.h>
int		main(void)
{
	char		dst[] = "world";
	const char	src[] = "hello";
	size_t		size;

	size = 20;
	printf("%zu, %s\n", ft_strlcat(dst, src, size), dst);
	return (0);
}
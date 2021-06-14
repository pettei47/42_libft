/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrs_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teppei <teppei@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 22:59:25 by teppei            #+#    #+#             */
/*   Updated: 2021/06/14 15:03:03 by teppei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstrs_fd(char **strs, char c, int fd)
{
	int	i;

	i = 0;
	while (strs[i])
	{
		ft_putstr_fd(strs[i++], fd);
		ft_putchar_fd(c, fd);
	}
}

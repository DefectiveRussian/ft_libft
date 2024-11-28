/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekhamid <dekhamid@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 23:50:33 by dekhamid          #+#    #+#             */
/*   Updated: 2024/05/13 00:46:26 by dekhamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	one;
	size_t	two;

	one = 0;
	two = 0;
	while (src[one])
		one++;
	if (size != 0)
	{
		while (src[two] != 0 && two < (size - 1))
		{
			dst[two] = src[two];
			two++;
		}
		dst[two] = 0;
	}
	return (one);
}

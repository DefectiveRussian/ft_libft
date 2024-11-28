/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekhamid <dekhamid@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 00:51:24 by dekhamid          #+#    #+#             */
/*   Updated: 2024/05/13 01:28:56 by dekhamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	one;
	size_t	two;

	one = 0;
	two = 0;
	while (dst[one] && one < size)
		one++;
	while (src[two] && (one + two + 1) < size)
	{
		dst[one + two] = src[two];
		two++;
	}
	if (one < size)
		dst[one + two] = 0;
	return (one + ft_strlen((char *)src));
}

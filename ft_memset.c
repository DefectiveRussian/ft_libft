/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekhamid <dekhamid@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 21:41:48 by dekhamid          #+#    #+#             */
/*   Updated: 2024/05/12 21:52:24 by dekhamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	l;
	char	*ch;

	l = 0;
	ch = s;
	while (l < n)
	{
		ch[l] = c;
		l++;
	}
	return (s);
}

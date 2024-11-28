/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekhamid <dekhamid@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 02:56:42 by dekhamid          #+#    #+#             */
/*   Updated: 2024/05/15 03:08:48 by dekhamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*c;
	int		i;
	int		u;

	i = ft_strlen(s);
	u = 0;
	c = (char *)malloc(sizeof (*c) * (i + 1));
	if (!c)
		return (0);
	while (u < i)
	{
		c[u] = s[u];
		u++;
	}
	c[u] = 0;
	return (c);
}

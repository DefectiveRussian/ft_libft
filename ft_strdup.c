/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekhamid <dekhamid@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 20:54:31 by dekhamid          #+#    #+#             */
/*   Updated: 2024/05/19 20:57:58 by dekhamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*d;
	int		l;
	int		x;

	x = 0;
	l = ft_strlen(s);
	d = (char *)malloc(sizeof(*d) * (l + 1));
	if (d == 0)
		return (0);
	while (x < l)
	{
		d[x] = s[x];
		x++;
	}
	d[x] = '\0';
	return (d);
}

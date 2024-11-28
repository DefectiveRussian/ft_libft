/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekhamid <dekhamid@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 02:44:35 by dekhamid          #+#    #+#             */
/*   Updated: 2024/05/15 02:53:23 by dekhamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*pt;
	char	*c;
	size_t	i;

	pt = malloc(nmemb * size);
	if (pt == 0)
		return (0);
	c = (char *)pt;
	i = 0;
	while (i < nmemb * size)
	{
		c[i] = '\0';
		i++;
	}
	return (pt);
}

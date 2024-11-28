/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekhamid <dekhamid@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 19:41:00 by dekhamid          #+#    #+#             */
/*   Updated: 2024/04/02 20:03:22 by dekhamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	c;

	c = 0;
	if (n == 0)
		return (0);
	while (n > 1 && s1[c] != 0 && s2[c] != 0 && s1[c] == s2[c])
	{
		if (s1[c] == s2[c])
			c++;
		else if (s1[c] > s2[c])
			return (1);
		else if (s1[c] < s2[c])
			return (-1);
	}
	if (c < n)
		return ((unsigned char)s1[c] - (unsigned char)s2[c]);
	else
		return (0);
}

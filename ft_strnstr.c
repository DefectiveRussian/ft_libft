/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekhamid <dekhamid@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 21:00:40 by dekhamid          #+#    #+#             */
/*   Updated: 2024/05/12 21:08:08 by dekhamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*c;
	size_t	one;
	size_t	two;

	c = (char *) big;
	one = 0;
	if (little[one] == 0)
		return (c);
	while (c[one] != 0 && one < len)
	{
		two = 0;
		while (little[two] != 0 && (one + two) < len)
		{
			if (c[one + two] == little[two])
				two++;
			else
				break ;
		}
		if (little[two] == 0)
			return (&c[one]);
		one++;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekhamid <dekhamid@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 11:11:38 by dekhamid          #+#    #+#             */
/*   Updated: 2024/05/19 11:32:40 by dekhamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_vibecheck(char const *s, unsigned int start, size_t len)
{
	if (!s)
		return (0);
	if (start > ft_strlen(s))
		len = 0;
	else if (len > (ft_strlen(s) - start))
		len = ft_strlen(s) - start;
	return (len);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	one;
	size_t	two;
	char	*ptr;

	one = 0;
	two = 0;
	len = ft_vibecheck((char *)s, start, len);
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (ptr == 0)
		return (0);
	while (s[one])
	{
		if (one >= start && two < len)
		{
			ptr[two] = s[one];
			two++;
		}
		one++;
	}
	ptr[two] = 0;
	return (ptr);
}

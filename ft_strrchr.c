/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekhamid <dekhamid@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 11:16:07 by dekhamid          #+#    #+#             */
/*   Updated: 2024/04/02 19:00:48 by dekhamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*bols;

	bols = 0;
	while (*s)
	{
		if (*s == (char)c)
			bols = s;
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	else
		return ((char *)bols);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekhamid <dekhamid@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 09:11:02 by dekhamid          #+#    #+#             */
/*   Updated: 2024/05/19 09:29:32 by dekhamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		one;
	int		two;
	char	*dest;

	one = ft_strlen(s1);
	two = ft_strlen(s2);
	dest = malloc(sizeof(char) * (one + two + 1));
	if (dest == 0)
		return (0);
	ft_strlcpy(dest, s1, one + 1);
	ft_strlcat(dest, s2, one + two + 1);
	return (dest);
}

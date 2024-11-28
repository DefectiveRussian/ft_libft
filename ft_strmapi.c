/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekhamid <dekhamid@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 10:52:29 by dekhamid          #+#    #+#             */
/*   Updated: 2024/05/19 11:00:43 by dekhamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		n;

	n = 0;
	str = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (str == 0)
		return (0);
	while (s[n])
	{
		str[n] = f(n, s[n]);
		n++;
	}
	str[n] = 0;
	return (str);
}

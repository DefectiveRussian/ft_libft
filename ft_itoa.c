/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekhamid <dekhamid@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 10:30:53 by dekhamid          #+#    #+#             */
/*   Updated: 2024/05/19 10:49:20 by dekhamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	ft_cbt(int n)
{
	long	x;
	long	num;

	num = n;
	x = 0;
	if (num > 0)
	{
		while (num >= 1)
		{
			num /= 10;
			x++;
		}
	}
	else
	{
		x = 1;
		while (num < 0)
		{
			num /= 10;
			x++;
		}
	}
	return (x);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	x;
	long	y;

	if (n < 0)
	{
		x = n;
		x = -x;
	}
	else
		x = n;
	y = ft_cbt(n);
	str = malloc(sizeof(char) * (y + 1));
	if (str == 0)
		return (0);
	str[y--] = '\0';
	while (y >= 0)
	{
		str[y] = (x % 10) + 48;
		x /= 10;
		y--;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}

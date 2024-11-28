/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekhamid <dekhamid@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 21:18:34 by dekhamid          #+#    #+#             */
/*   Updated: 2024/05/12 22:23:17 by dekhamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int	i;
	int	negative;
	int	n;

	i = 0;
	n = 0;
	negative = 1;
	while ((nptr[i] == 32) || (nptr[i] <= 13 && nptr[i] >= 9))
		i++;
	if (nptr[i] == 45 || nptr[i] == 43)
	{
		if (nptr[i++] == 45)
			negative *= -1;
	}
	while (nptr[i] >= 48 && nptr[i] <= 57)
		n = n * 10 + (nptr[i++] - 48);
	return (n * negative);
}

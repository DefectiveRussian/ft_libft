/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekhamid <dekhamid@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 19:34:56 by dekhamid          #+#    #+#             */
/*   Updated: 2024/04/02 18:41:23 by dekhamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c < 0 || c > 127)
		return (0);
	else
		return (1);
}

/*#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int c = 1562;

	printf("fake: %i\n", ft_isascii(c));
	printf("real: %i\n", isascii(c));
	return (0);	
}
*/
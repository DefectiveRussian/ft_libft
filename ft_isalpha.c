/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekhamid <dekhamid@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 18:23:30 by dekhamid          #+#    #+#             */
/*   Updated: 2024/04/02 18:41:24 by dekhamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c < 65 || c > 122) || (c > 90 && c < 97))
		return (0);
	else
		return (1);
}

/*#include <stdio.h>
#include <ctype.h>
int	main(void)
{
	char c = 'l';

	printf("fake: %i\n", ft_isalpha(c));
	printf("real: %i\n", isalpha(c));
	return (0);
}
*/
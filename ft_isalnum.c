/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekhamid <dekhamid@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 18:28:36 by dekhamid          #+#    #+#             */
/*   Updated: 2024/05/12 20:39:43 by dekhamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c < 48 || c > 122) || (c > 90 && c < 97) || (c > 57 && c < 65))
		return (0);
	else
		return (1);
}

/*#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	char c = 'B';

	printf("fake: %i\n", ft_isalnum(c));
	printf("real: %i\n", isalnum(c));
	return (0);	
}
*/
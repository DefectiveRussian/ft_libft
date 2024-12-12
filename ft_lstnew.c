/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekhamid <dekhamid@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 15:21:13 by dekhamid          #+#    #+#             */
/*   Updated: 2024/12/12 16:28:48 by dekhamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
	t_list *first = (t_list *) malloc(sizeof(t_list));
	first->content = content;
	first->next = NULL;
	return (first);
}

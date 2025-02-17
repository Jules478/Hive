/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierce <mpierce@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 12:57:33 by mpierce           #+#    #+#             */
/*   Updated: 2024/12/09 12:46:45 by mpierce          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst) // returns pointer to the last element of a list
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL) // iterate through until the next element in null
		lst = lst->next;
	return (lst);
}

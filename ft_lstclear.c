/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopito <jopito@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 22:04:13 by jopito            #+#    #+#             */
/*   Updated: 2025/10/30 11:22:10 by jopito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	while(*lst)
	{
		temp = (*lst)->next;
		ft_delone(*lst, del);
		*lst = temp;
	}
	free(*lst);
	*lst = NULL;
}

int	main(void)
{
	
}
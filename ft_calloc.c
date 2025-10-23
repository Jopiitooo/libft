/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoares- <rsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 20:14:08 by rsoares-          #+#    #+#             */
/*   Updated: 2025/10/23 20:31:02 by rsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*temp;
	size_t	i;
	
	temp = malloc(count * size);
	if (!temp)
		return(NULL);
	while (i < count * size)
		temp[i++] = 0;
	return (temp);
}

/*
int	main(void)
{
	printf("%s", ft_calloc(2, 5));
}
*/
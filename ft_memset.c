/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoares- <rsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 12:40:07 by rsoares-          #+#    #+#             */
/*   Updated: 2025/11/07 14:29:47 by rsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n) // Trade the n first bytes of the memory area pointed by s for the byte c
{
	unsigned char	*p;

	p = s;
	while (n-- > 0)
		*p++ =	c;
	return (s);
}

/*
int	main(void)
{
	char	str[] = "Hello World!";
	printf("%s", ft_memset(str, '*', 5));
}
*/
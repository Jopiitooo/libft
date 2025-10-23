/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoares- <rsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 16:52:25 by rsoares-          #+#    #+#             */
/*   Updated: 2025/10/23 17:44:27 by rsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*pdest;
	unsigned char	*psrc;
	
	if (!dest || !src)
		return (dest);
	pdest = (unsigned char *)dest;
	psrc = (unsigned char *)src;
	while (n-- > 0)
		*pdest++ = *psrc++;
	return (dest);
}

/*
int	main(void)
{
	char	s1[] = "Hello World";
	char	s2[10];

	printf("%s\n", s1);
	printf("%s", ft_memcpy(s2, s1, 4));
}
*/
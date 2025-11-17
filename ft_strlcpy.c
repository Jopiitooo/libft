/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoares- <rsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 21:22:20 by rsoares-          #+#    #+#             */
/*   Updated: 2025/10/25 10:44:09 by rsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dsize)
{
	size_t	lenght;
	size_t	i;
	
	i = 0;
	lenght = ft_strlen(src);
	if (lenght + 1 < dsize)
	{
		while (i <= lenght)
			dest[i++] = src[i++];
	}
	else if (dsize != 0)
	{
		while (i < dsize)
			dest[i++] = src[i++];
		dest[i++] = '\0';
	}
	return (lenght);
}


int	main(void)
{
	char	s1[] = "Miau miau haha";
	char	s2[20];

	printf("%lu", ft_strlcpy(s2, s1, 5));
}

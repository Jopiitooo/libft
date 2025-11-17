/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoares- <rsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 21:22:20 by rsoares-          #+#    #+#             */
/*   Updated: 2025/11/17 15:25:15 by rsoares-         ###   ########.fr       */
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

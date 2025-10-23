/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoares- <rsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 18:23:39 by rsoares-          #+#    #+#             */
/*   Updated: 2025/10/23 18:46:09 by rsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (needle[i] == '\0')
		return ((char *) &haystack[i]);
	while (haystack && i < len)
	{
		while (haystack && haystack[i + j] == needle [j] && i + j < len)
		{
			j++;
			if (needle[j] == '\0')
				return ((char *) &haystack[i]);
		}
		i++;
		j = 0;
	}
	return (0);
}

/*
int	main(void)
{
	char	s1[] = "miau miau frog frog au au";
	char	s2[1];
	printf("%s", ft_strnstr(s1, s2, 14));
}
*/
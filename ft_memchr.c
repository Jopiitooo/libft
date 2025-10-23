/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoares- <rsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 17:23:46 by rsoares-          #+#    #+#             */
/*   Updated: 2025/10/23 18:09:06 by rsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	cc;
	unsigned char	*str;
	size_t			i;
	
	str = (unsigned char *) s;
	cc = (char) c;
	i = 0;
	while (i < n)
	{
		if (str[i] == cc)
			return((void *) &str[i]);
		i++;
	}
	return (NULL);
}

/*
int	main(void)
{
	char	s1[] = "arroz de pato";
	printf("%s", ft_memchr(s1, 'e', 8));
}
*/
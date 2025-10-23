/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoares- <rsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 23:26:36 by rsoares-          #+#    #+#             */
/*   Updated: 2025/10/23 16:12:05 by rsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	char			cc;
	
	cc = (char) c;
	i = 0;
	while (s[i])
	{
		if (s[i] == cc)
			return((char *) &s[i]);
		i++;
	}
	if (s[i] == cc)
		return ((char *) &s[i]);
	return (NULL);
}

/*
int	main(void)
{
	char	s1[] = "arroz de pato";
	printf("%s", ft_strchr(s1, ' '));
}
*/
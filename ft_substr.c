/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoares- <rsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 21:10:13 by rsoares-          #+#    #+#             */
/*   Updated: 2025/10/23 21:31:38 by rsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	int	i;
	char	*str;
	
	if (!s)
		return (NULL);
	str = (char *) malloc(sizeof(char) * len);
	if (!str)
		return (NULL);
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	return (str);
}

/*
int	main(void)
{
	char	s1[] = "Arroz de pato";
	printf("%s", ft_substr(s1, 6, 5));
}
*/
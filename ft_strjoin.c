/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoares- <rsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 21:34:03 by rsoares-          #+#    #+#             */
/*   Updated: 2025/10/25 10:40:05 by rsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	int	i;
	int	j;
	size_t	len_s1;
	size_t	len_s2;
	char	*joined;
	
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	joined = (char *) malloc(sizeof(char) * (len_s1 + len_s2) + 1);
	if (!joined)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
		joined[j++] = s1[i++];
	i = 0;
	while (s2[i])
		joined[j++] = s2[i++];
	joined[j] = '\0';
	return (joined);
}

/*
int	main(void)
{
	char	s1[] = "Carglass repara ";
	char	s2[] = "Carglass substitui";
	printf("%s", ft_strjoin(s1, s2));
}
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoares- <rsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 21:34:03 by rsoares-          #+#    #+#             */
/*   Updated: 2025/10/23 22:04:28 by rsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	int	i;
	int	j;
	int	len;
	char	*joined;
	
	len = 0;
	while (s1[len])
		len++;
	while (s2[len])
		len++;
	joined = (char *) malloc(sizeof(char) * len + 1);
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

int	main(void)
{
	char	s1[] = "Carglass repara ";
	char	s2[] = "Carglass substitui";
	printf("%s", ft_strjoin(s1, s2));
}
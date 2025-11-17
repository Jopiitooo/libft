/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoares- <rsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 20:14:08 by rsoares-          #+#    #+#             */
/*   Updated: 2025/11/07 14:16:26 by rsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*temp;
	size_t	i;
	
	if (!count || !size)
		return (malloc(1));
	if (count > SIZE_MAX / size)
		return (NULL);
	temp = malloc(count * size);
	if (!temp)
		return (NULL);
	while (i < count * size)
		temp[i++] = 0;
	return (temp);
}

/*
int	main(void)
{
	char	*s1;
	char	*s2;
	
	s1 = "Hello";
	s2 = "Pau";
	printf("Before ft_calloc: %s | Before callloc: %s\n", s1, s2);
	s1 = (char *)ft_calloc(5, 2);
	s2 = (char *)calloc(5, 2);
	if (!s1 || !s2)
	{
		printf("Erro lol");
		return (1);
	}
	printf("After ft_calloc: \"%s\" | After callloc: \"%s\"", s1, s2);
	free(s1);
	free(s2);
	return (0);
}
*/
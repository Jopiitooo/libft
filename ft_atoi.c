/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoares- <rsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 18:47:38 by rsoares-          #+#    #+#             */
/*   Updated: 2025/10/23 18:58:22 by rsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned int	i;
	int	sign;
	int	res;
	
	i = 0;
	sign = 1;
	res = 0;
	while (str[i] == 32 || (str[i] >= 7 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + (str[i] - '0');
		i++;	
	}
	return (sign * res);
}

/*
int	main(void)
{
	char	s1[] = " 	 	-+5432dvf34";
	printf("%i", ft_atoi(s1));
}
*/
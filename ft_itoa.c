/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoares- <rsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 16:34:19 by rsoares-          #+#    #+#             */
/*   Updated: 2025/11/17 15:05:50 by rsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	lenght_int(long int nbr)
{
	int	count;

	count = 0;
	if (nbr < 0)
	{
		nbr *= -1;
		count++;
	}
	if (nbr == 0)
		count++;
	while (nbr != 0)
	{
		nbr /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	long int	nbr;
	int			lenght;
	char		*res;
	int			i;

	nbr = n;
	lenght = lenght_int(nbr);
	res = (char *) malloc(sizeof(char) * lenght + 1);
	if (!res)
		return (NULL);
	res[0] = '0';
	if (nbr < 0)
		nbr *= -1;
	i = lenght - 1;
	while (nbr != 0)
	{
		res[i] = ((nbr % 10) + 48);
		nbr /= 10;
		i--;
	}
	if (n < 0)
		res[0] = '-';
	res[lenght] = '\0';
	return (res);
}

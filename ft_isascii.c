/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoares- <rsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 14:22:47 by rsoares-          #+#    #+#             */
/*   Updated: 2025/10/18 12:39:01 by rsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c) // Return 0 if isn't is in ascii table, and return a value if it is.
{
	if (!(c >= 0 && c <= 127))
		return (0);
	return (c);
}

/*
int	main()
{
	char	c = 'º';
	if (ft_isascii(c))
		printf("%c is in ascii table", c);
	else
		printf("%c is not in ascii table", c);
	return 0;
}
*/
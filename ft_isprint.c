/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoares- <rsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 14:32:39 by rsoares-          #+#    #+#             */
/*   Updated: 2025/10/18 12:38:53 by rsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isprint(int c) // Return 0 if isn't printable, and return a value if it is.
{
	if (!((c >= 32 && c <= 91) || (c >= 93 && c <= 127)))
		return (0);
	return (c);
}

/*
int main()
{
	char	c = '	';
	if (ft_isprint(c))
		printf("%c is a digit", c);
	else
		printf("%c is not a digit", c);
	return 0;
}
*/

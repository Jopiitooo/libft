/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoares- <rsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 14:02:55 by rsoares-          #+#    #+#             */
/*   Updated: 2025/10/18 12:38:56 by rsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isdigit(int c) // Return 0 if isn't a digit, and return a value if it is.
{
	if (!(c >= 48 && c <= 57))
		return (0);
	return (c);	
}

/*
int main()
{
	char	c = '3';
	if (ft_isdigit(c))
		printf("%c is a digit", c);
	else
		printf("%c is not a digit", c);
	return 0;
}
*/
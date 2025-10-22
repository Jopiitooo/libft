/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoares- <rsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 14:10:13 by rsoares-          #+#    #+#             */
/*   Updated: 2025/10/18 12:39:10 by rsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalnum(int c) // Return 0 if isn't a alpha numeric, and return a value if it is.
{
    if (!((c >= 65 && c <= 90) || (c >= 97 && c <= 122) || (c >= 48 && c <= 57)))
		return (0);
	return (c);
}

/*
int main()
{
	char	c = '{';
	if (ft_isalnum(c))
		printf("%c is a alpha numeric", c);
	else
		printf("%c is not a alpha numeric", c);
	return 0;
}
*/
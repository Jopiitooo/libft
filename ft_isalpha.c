/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoares- <rsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 13:36:21 by rsoares-          #+#    #+#             */
/*   Updated: 2025/10/18 12:39:06 by rsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalpha(int c) // Return 0 if isn't a letter, and return a value if it is.
{
	if (!((c >= 65 && c <= 90) || (c >= 97 && c <= 122)))
		return (0);
	return (c);
}

/*
int main()
{
	char	c = 'a';
	if (ft_isalpha(c))
		printf("%c is a letter", c);
	else
		printf("%c is not a letter", c);
	return 0;
}
*/
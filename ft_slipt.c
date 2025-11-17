/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_slipt.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoares- <rsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 10:46:23 by rsoares-          #+#    #+#             */
/*   Updated: 2025/10/25 12:43:47 by rsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	word_counter(const char *s, char c)
{
	int	counter;
	int	i;
	
	i = 0;
	counter = 0;
	while (s[i])
	{
		if (s[i] == c)
			counter++;
		i++;
	}
	return (counter);
}

static char	*fill_word(const char *s, int start, int end)
{
	char	*word;
	int	i;

	i = 0;
	word = malloc((end - start + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (start < end)
	{
		word[i] = s[start];
		i++;
		start++;
	}
	word[i] = '\0';
	return (word);
}

static void	*ft_feelfree(char **strs, int count)
{
	int	i;
	
	i = 0;
	while (i < count)
	{
		free(strs[i]);
		i++;
	}
	free(strs);
	return (NULL);
}

char	**ft_slipt(const char *s, char c)
{
	char	**slipted;
	size_t	i;
	int	j;
	int	words;

	slipted = (char **) malloc(sizeof(char) * word_counter(s, c) + 1);
	if (!slipted)
		return (NULL);
	i = 0;
	j = 0;
	words = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && words < 0)
			words = i;
		else if ((s[i] == c || i == ft_strlen(s)) && words >= 0)
		{
			slipted[j] = fill_word(s, words, i);
			if (!slipted[j])
				return (ft_feelfree(slipted, j));
			words = -1;
			j++;
		}
		i++;
	}
	return (slipted);
}

int	main(void)
{
	char	*frase = "Adoro comer arroz de pato!";
	char	**palavras = ft_slipt(frase, ' ');
	for (size_t	i = 0; palavras[i] != NULL; i++)
	{
		printf("[%s]", palavras[i]);
		free(palavras[i]);
	}
	free(palavras);
	return 0;
}
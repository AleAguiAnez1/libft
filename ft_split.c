/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaguirr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 13:21:34 by alaguirr          #+#    #+#             */
/*   Updated: 2023/09/26 11:38:58 by alaguirr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_count(const char *s, char c)
{
	size_t	i;
	int		word;

	i = 0;
	word = 0;
	while (*s)
	{
		if (*s != c && word == 0)
		{
			i++;
			word = 1;
		}
		if (*s == c)
			word = 0;
		s++;
	}
	return (i);
}

static size_t	word_len(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (*(s + i) && *(s + i) != c)
		i++;
	return (i);
}

static void	free_result(char **result, int j)
{
	while (j > 0)
		free(result[--j]);
	free(result);
}

static char	**ft_fill(const char *s, char c, char **result, size_t words)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i < words)
	{
		while (*(s + j) && *(s + j) == c)
			j++;
		*(result + i) = ft_strndup(s + j, word_len(s + j, c));
		if (!*(result + i))
		{
			free_result(result, i);
			return (NULL);
		}
		while (*(s + j) && *(s + j) != c)
			j++;
		i++;
	}
	*(result + i) = NULL;
	return (result);
}

char	**ft_split(const char *s, char c)
{
	size_t	words;
	char	**result;

	if (!s)
		return (NULL);
	words = word_count(s, c);
	result = (char **)malloc(sizeof(char *) * (words + 1));
	if (!result)
		return (NULL);
	result = ft_fill(s, c, result, words);
	return (result);
}

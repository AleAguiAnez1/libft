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

char	*ft_strndup(const char *s, size_t n)
{
	char	*dup;
	size_t	len;

	len = ft_strlen(s);
	if (n < len)
		len = n;
	dup = (char *)malloc(len + 1);
	if (!dup)
		return (NULL);
	ft_strlcpy(dup, s, len + 1);
	return (dup);
}

static char	*copy_word(const char *s, char c)
{
	int	word_len;

	word_len = 0;
	while (s[word_len] && s[word_len] != c)
		word_len++;
	return (ft_strndup(s, word_len));
}

static char	**allocate_memory(int word_count)
{
	char	**result;

	result = (char **)malloc((word_count + 1) * sizeof(char *));
	return (result);
}

static void	*free_result(char **result, int j)
{
	while (j > 0)
		free(result[--j]);
	free(result);
	return (NULL);
}

int	count_words(const char *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**result;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	result = allocate_memory(count_words(s, c));
	if (!result)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			result[j++] = copy_word(&s[i], c);
			if (!result[j - 1])
				return (free_result(result, j));
		}
		while (s[i] && s[i] != c)
			i++;
	}
	result[j] = NULL;
	return (result);
}

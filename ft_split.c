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

static int	count_words(const char *s, char c)
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
	char	**result;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	result = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			result[j++] = ft_strndup(&s[i], count_chars(&s[i], c));
			if (!result[j - 1])
				return (NULL);
			while (s[i] && s[i] != c)
				i++;
		}
			i++;
	}
	result[j] = NULL;
	return (result);
}

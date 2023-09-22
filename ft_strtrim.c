/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isinset.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaguirr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 11:47:16 by alaguirr          #+#    #+#             */
/*   Updated: 2023/09/21 11:47:38 by alaguirr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isinset(char c, const char *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

static size_t	get_trimmed_len(char const *s1, char const *set)
{
	size_t	len;
	size_t	start;
	size_t	end;

	len = 0;
	start = 0;
	end = len - 1;
	while (s1[len] != '\0')
		len++;
	while (ft_isinset(s1[start], set))
		start++;
	while (end > start && ft_isinset(s1[end], set))
		end--;
	return (end - start + 1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	trimmed_len;
	char	*result;

	len = 0;
	start = 0;
	end = len - 1;
	trimmed_len = get_trimmed_len(s1, set);
	result = (char *)malloc((trimmed_len + 1) * sizeof(char));
	if (s1 == NULL || set == NULL)
		return (NULL);
	if (result == NULL)
		return (NULL);
	while (i < trimmed_len)
	{
		result[i] = s1[start + i];
		i++;
	}
	result[trimmed_len] = '\0';
	return (result);
}

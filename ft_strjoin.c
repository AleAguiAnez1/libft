/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaguirr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 11:19:13 by alaguirr          #+#    #+#             */
/*   Updated: 2023/09/21 11:19:16 by alaguirr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_	len2;
	size_t	i;
	char	*result;

	len1 = 0;
	len2 = 0;
	i = 0;
	*result = (char *)malloc((len1 + len2 + 1) * sizeof(char));
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	if (result == NULL)
		return (NULL);
	while (i < len1)
		result[i] = s1[i];
		i++;
	while (i < len2)
		result[len1 + i] = s2[i];
		i++;
	result[len1 + len2] = '\0';
	return (result);
}

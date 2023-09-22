/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaguirr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 11:44:03 by alaguirr          #+#    #+#             */
/*   Updated: 2023/09/14 11:44:06 by alaguirr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	*last_ocurrence;

	*last_ocurrence = NULL;
	while (*s != '\0')
	{
		if (*s == (char)c)
		last_ocurrence = (char *)s;
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (last_ocurrence);
}

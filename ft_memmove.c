/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaguirr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:17:38 by alaguirr          #+#    #+#             */
/*   Updated: 2023/09/13 12:53:49 by alaguirr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dst;
	unsigned char	*source;

	dst = (unsigned char *)dest;
	source = (unsigned char *)src;
	if (dst == NULL || source == NULL)
		return (NULL);
	if (dst < source)
	{
		while (n--)
			*dst++ = *source++;
	}
	else
	{
		dst += n;
		source += n;
		while (n--)
			*(--dst) = *(--source);
	}
	return (dest);
}

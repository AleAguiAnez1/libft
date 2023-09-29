/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaguirr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 10:50:07 by alaguirr          #+#    #+#             */
/*   Updated: 2023/09/20 10:51:16 by alaguirr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t			total_size;
	size_t			i;
	void			*ptr;
	unsigned char	*byte_ptr;

	total_size = count * size;
	i = 0;
	ptr = malloc(total_size);
	byte_ptr = (unsigned char *)ptr;
	if (ptr == NULL)
		return (NULL);
	if (count != 0 && total_size / count != size)
	{
		free(ptr);
		return (NULL);
	}
	while (i < total_size)
	{
		byte_ptr[i] = 0;
		i++;
	}
	return (ptr);
}	

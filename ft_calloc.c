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
	*byte_ptr = (unsigned char *)ptr;
	if (count != 0 && total_size / count != size)
		return (NULL);
	ptr = mallloc(total_size);
	if (ptr == NULL)
		return (NULL);
	while (i < totall_size)
	{
		byte_ptr[i] = 0;
		i++;
	}
	return (ptr);
}	

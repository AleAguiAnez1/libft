/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaguirr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 13:06:37 by alaguirr          #+#    #+#             */
/*   Updated: 2023/09/13 13:07:28 by alaguirr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;
	size_t			i;

		*p = (unsigned char *)s;
		i = 0;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
}
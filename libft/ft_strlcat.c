/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbongout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 12:59:16 by dbongout          #+#    #+#             */
/*   Updated: 2023/12/07 13:35:12 by dbongout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dst_size;
	size_t	src_size;
	size_t	i;

	src_size = ft_strlen(src);
	if (size == 0)
		return (src_size);
	dst_size = ft_strlen(dest);
	i = 0;
	if (dst_size > size)
		return (size + src_size);
	while (src[i] != '\0' && size - 1 > (dst_size + i))
	{
		dest[dst_size + i] = src[i];
		i++;
	}
	dest[dst_size + i] = '\0';
	return (dst_size + src_size);
}

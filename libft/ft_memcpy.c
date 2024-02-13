/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbongout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 09:24:07 by dbongout          #+#    #+#             */
/*   Updated: 2023/12/06 16:14:50 by dbongout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*char_dest;
	const unsigned char	*char_src;
	size_t				i;

	char_dest = (unsigned char *) dest;
	char_src = (const unsigned char *) src;
	i = 0;
	if (dest == 0 && src == 0)
		return (dest);
	while (i < n)
	{
		char_dest[i] = char_src[i];
		i++;
	}
	return (dest);
}

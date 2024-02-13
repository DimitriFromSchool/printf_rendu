/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbongout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:17:03 by dbongout          #+#    #+#             */
/*   Updated: 2023/12/06 15:52:27 by dbongout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char		*char_dest;
	const unsigned char	*char_src;
	size_t				i;

	char_dest = (unsigned char *)dest;
	char_src = (const unsigned char *)src;
	i = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (char_dest > char_src)
	{
		while (len--)
			char_dest[len] = char_src[len];
	}
	else
	{
		while (len > i)
		{
			char_dest[i] = char_src[i];
			i++;
		}
	}
	return (dest);
}

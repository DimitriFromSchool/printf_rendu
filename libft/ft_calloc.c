/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbongout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 12:11:43 by dbongout          #+#    #+#             */
/*   Updated: 2023/12/06 16:05:42 by dbongout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc( size_t count, size_t size )
{
	unsigned char	*memory;
	size_t			i;

	i = 0;
	memory = malloc(count * size);
	if (memory == NULL)
		return (NULL);
	while (i < count * size)
	{
		memory[i] = 0;
		i++;
	}
	return (memory);
}

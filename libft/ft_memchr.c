/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbongout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 21:27:35 by amcmedia          #+#    #+#             */
/*   Updated: 2023/12/05 13:19:59 by dbongout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*mem ;
	unsigned char	tofind;
	size_t			i;

	mem = (unsigned char *) s;
	tofind = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		if (mem[i] == tofind)
			return ((void *)&mem[i]);
		else
			i++;
	}
	return (NULL);
}

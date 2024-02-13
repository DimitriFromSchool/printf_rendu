/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbongout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 15:45:08 by dbongout          #+#    #+#             */
/*   Updated: 2023/12/06 19:58:13 by dbongout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*to_search;
	char	to_find;

	to_find = (char) c;
	i = ft_strlen(s);
	to_search = (char *)s;
	while (i > 0)
	{
		if (to_search[i] == to_find)
			return (&to_search[i]);
		i--;
	}
	if (to_search[i] == to_find)
		return (&to_search[i]);
	return (NULL);
}

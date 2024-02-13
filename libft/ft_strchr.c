/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbongout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 15:38:15 by dbongout          #+#    #+#             */
/*   Updated: 2023/12/06 17:51:10 by dbongout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*to_search;
	char	to_find;

	i = 0;
	to_search = (char *)s;
	to_find = (char)c;
	while (s[i] != '\0')
	{
		if (s[i] == to_find)
			return (&to_search[i]);
		i++;
	}
	if (s[i] == to_find)
		return (&to_search[i]);
	return (NULL);
}

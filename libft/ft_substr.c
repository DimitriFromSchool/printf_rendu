/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbongout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:59:01 by dbongout          #+#    #+#             */
/*   Updated: 2023/12/07 14:24:41 by dbongout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	limit_l;
	size_t	limit_r;
	char	*dest;

	if (!s)
		return (NULL);
	i = 0;
	limit_l = (size_t)start;
	limit_r = ft_strlen(s);
	if (limit_l > limit_r)
		limit_l = limit_r;
	if (len >= limit_r - limit_l)
		len = limit_r - limit_l;
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (dest == NULL)
		return (NULL);
	while (i < len && s[limit_l] != '\0')
	{
		dest[i] = s[limit_l];
		limit_l++;
		i++;
	}
	dest[len] = '\0';
	return (dest);
}

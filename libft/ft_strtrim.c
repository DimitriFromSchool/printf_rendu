/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbongout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 21:46:40 by dbongout          #+#    #+#             */
/*   Updated: 2023/12/11 15:07:44 by dbongout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	hitandgo(char const c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1,	char const *set)
{
	char	*trimmed;
	int		start;
	int		end;
	int		i;

	if (!s1)
		return (NULL);
	start = 0;
	end = (int)ft_strlen(s1);
	i = 0;
	while (s1[start] && hitandgo(s1[start], set))
		start++;
	while (end > start && hitandgo(s1[end - 1], set))
		end--;
	trimmed = (char *)malloc(sizeof(char) * end - start + 1);
	if (trimmed == NULL)
		return (NULL);
	while (start < end)
		trimmed[i++] = s1[start++];
	trimmed[i] = '\0';
	return (trimmed);
}


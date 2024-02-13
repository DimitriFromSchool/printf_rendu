/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbongout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:31:07 by dbongout          #+#    #+#             */
/*   Updated: 2023/12/08 11:24:26 by dbongout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	tab_size(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s != '\0')
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
	}
	return (count);
}

static char	**free_tab(char **tab, int i)
{
	while (i >= 0)
	{
		free(tab[i]);
		i--;
	}
	free(tab);
	return (NULL);
}

static char	**fill_tab(char const *s, char c, char **tab, int tab_len)
{
	int	start;
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i] && j < tab_len)
	{
		while (s[i] && s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		tab[j] = ft_substr(s, start, i - start);
		if (!tab[j])
			return (free_tab(tab, j));
		j++;
	}
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		tab_len;

	if (!s)
		return (NULL);
	tab_len = tab_size(s, c);
	tab = ft_calloc((tab_len + 1), sizeof(char *));
	if (!tab)
		return (NULL);
	return (fill_tab(s, c, tab, tab_len));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbongout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 10:53:37 by dbongout          #+#    #+#             */
/*   Updated: 2023/12/06 19:59:03 by dbongout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*bg;

	j = 0;
	i = 0;
	bg = (char *)big;
	if (*little == '\0' || little == NULL)
		return (bg);
	while (i < len && bg[i] != '\0' )
	{
		if (bg[i] == little[j])
		{
			while (little[j] != '\0' && bg[i + j] == little[j] && i + j < len)
				j++;
			if (little[j] == '\0')
				return (&bg[i]);
		}
		j = 0;
		i++;
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbongout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:02:44 by dbongout          #+#    #+#             */
/*   Updated: 2023/12/06 14:27:34 by dbongout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	mod(long long nb)
{
	long long	nbr;

	nbr = nb % 10;
	return (nbr);
}

static int	number_len(long long num)
{
	int	len;

	len = 0;
	while (num >= 10 || num <= -10)
	{
		num = num / 10;
		len++;
	}
	len++;
	return (len);
}

char	*ft_itoa(int n)
{
	int			length;
	char		*result;
	long long	converted_int;

	length = number_len((long long)n);
	converted_int = (long long)n;
	if (converted_int < 0)
	{
		length++;
		converted_int = -converted_int;
	}
	result = (char *)malloc(sizeof(char) * length + 1);
	if (result == NULL)
		return (NULL);
	result[length] = '\0';
	while (length != 0)
	{
		length--;
		result[length] = mod(converted_int) + 48;
		converted_int = converted_int / 10;
	}
	if (n < 0)
		result[0] = '-';
	return (result);
}

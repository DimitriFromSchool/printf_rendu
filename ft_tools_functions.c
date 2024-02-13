/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tools_functions.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbongout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 22:01:43 by dbongout          #+#    #+#             */
/*   Updated: 2024/02/13 18:13:32 by dbongout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

int	ft_printchar(int c)
{
	ssize_t	check_write;

	check_write = write(1, &c, 1);
	if (check_write == -1)
		return (-1);
	return (1);
}

int	ft_printstr(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		ft_printstr("(null)");
	}
	while (str[i])
	{
		ft_printchar(str[i]);
		i++;
	}
	return (i);
}

int	ft_printnbr(int n)
{
	int		count;
	char	*num;

	count = 0;
	num = ft_itoa(n);
	count = ft_printstr(num);
	free(num);
	return (count);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tools_functions.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbongout <dbongout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 22:01:43 by dbongout          #+#    #+#             */
/*   Updated: 2024/02/07 12:53:46 by dbongout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

static void	ft_putchar(const char c)
{
	write(1, &c, 1);
}

static void	ft_putstr(char *str)
{
	if (!str)
		return ;
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

int	ft_printstr(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		ft_putstr("(null)");
		return (6);
	}
	while (str[i])
	{
		ft_putchar(str[i]);
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

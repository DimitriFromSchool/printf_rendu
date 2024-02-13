/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbongout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 16:00:43 by dbongout          #+#    #+#             */
/*   Updated: 2024/02/13 21:28:11 by dbongout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

static int	ft_ptr_len(unsigned long long num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num = num / 16;
	}
	return (len);
}

static void	ft_convert_ptr(unsigned long long num)
{
	if (num >= 16)
	{
		ft_convert_ptr(num / 16);
		ft_convert_ptr(num % 16);
	}
	else
	{
		if (num <= 9)
			ft_printchar((num + '0'));
		else
			ft_printchar((num - 10 + 'a'));
	}
}

int	ft_print_ptr(void *ptr)
{
	int	print_length;
	unsigned long long address;

	print_length = 0;
	address = (unsigned long long)ptr;
	 
	if (address == 0)
	{
		return (print_length += ft_printstr("(nil)"));
	}
	print_length += ft_printstr("0x");
	ft_convert_ptr(address);
	print_length += ft_ptr_len(address);
	return (print_length);
}

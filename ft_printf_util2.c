/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_util1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 15:09:41 by nkietwee          #+#    #+#             */
/*   Updated: 2022/10/30 13:56:50 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexlower(unsigned int number)
{
	int		size;
	int		count;
	char	ans[9];

	size = 0;
	count = 0;
	if (number == 0)
	{
		ft_putchar('0');
		return (1);
	}
	while (number > 0 && size >= 0)
	{
		ans[size++] = "0123456789abcdef"[number % 16];
		number = number / 16;
		count++;
	}
	size = size -1;
	while (size >= 0)
		write (1, &ans[size--], 1);
	return (count);
}

int	ft_puthexupper(unsigned int number)
{
	int		size;
	int		count;
	char	ans[9];

	size = 0;
	count = 0;
	if (number == 0)
	{
		ft_putchar('0');
		return (1);
	}
	while (number > 0 && size >= 0)
	{
		ans[size++] = "0123456789ABCDEF"[number % 16];
		number = number / 16;
		count++;
	}
	size = size - 1 ;
	while (size >= 0)
		write (1, &ans[size--], 1);
	return (count);
}

int	ft_putpt(unsigned long long number)
{
	int		size;	
	int		count;
	char	ans[16];

	size = 0;
	count = 0;
	if (number < 0)
		number = -number;
	if (number == 0 && number / 1 == 0)
	{		
		ft_putchar('0');
		return (1);
	}
	while (number > 0 && size >= 0)
	{
		ans[size++] = "0123456789abcdef"[number % 16];
		number = number / 16;
		count++;
	}
	size = size - 1;
	while (size >= 0)
		write (1, &ans[size--], 1);
	return (count);
}

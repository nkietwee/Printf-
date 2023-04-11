/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_util1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 15:09:41 by nkietwee          #+#    #+#             */
/*   Updated: 2022/10/30 13:53:04 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (ft_putstr("(null)"));
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

int	ft_putdec(int number)
{
	int	len;

	len = 0;
	if (number == -2147483648)
	{
		len += ft_putdec(-1 * 214748364);
		len += ft_putchar('8');
		return (11);
	}
	if (number < 0)
	{
		len += ft_putchar ('-');
		len += ft_putdec (number * -1);
	}
	else if (number >= 10)
	{
		len += ft_putdec (number / 10);
		len += ft_putdec (number % 10);
	}
	else
		len += ft_putchar (number + 48);
	return (len);
}

int	ft_putudec(unsigned int number)
{
	int	len;

	len = 0;
	if (number >= 10)
	{
		len += ft_putudec (number / 10);
		len += ft_putudec (number % 10);
	}
	else
		len += ft_putchar (number + 48);
	return (len);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 19:14:23 by ksudyn            #+#    #+#             */
/*   Updated: 2025/02/21 20:24:29 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int     ft_putstr(char *s)
{
    int     i = 0;

    if (!s)
        s = "(null)";
    while (s[i])
        i++;
    write(1, s, i);
    return (i);
}

void	print_hex(unsigned int n, int *count)
{
	char hex_digits[] = "0123456789abcdef";

	if (n >= 16)
		print_hex(n / 16, count);
	write(1, &hex_digits[n % 16], 1);
	(*count)++;
}

void ft_putnbr(int n, int *count)
{
    if (n >= 10)
        ft_putnbr(n / 10, count);
    char num = (n % 10) + '0';
    write(1, &num, 1);           
    (*count)++;
}

int print_decimal(int number)
{
    int count = 0;

    if (number < 0)
    {
        write(1, "-", 1);
        count++;
        ft_putnbr(-number, &count);
    }
    else
        ft_putnbr(number, &count);

    return count;
}


int	ft_printf(char *str, ...)
{
	va_list		arg;
	int			count = 0;
	int			i = 0;

	va_start(arg, str);
	if (str == NULL)
		return (0);
	while (str[i])
	{
		if (str[i] == '%')
		{
			if (str[i + 1] == 'd')
				count += print_decimal(va_arg(arg, int));
			else if (str[i + 1] == 'x')
				count += print_hex(va_arg(arg, unsigned int), &count);
			else if (str[i + 1] == 's')
				count += ft_putstr(va_arg(arg, char *));
			i++;
		}
		else
			count += ft_putchar(str[i]);
		i++;
	}
	va_end(arg);
	return (count);
}

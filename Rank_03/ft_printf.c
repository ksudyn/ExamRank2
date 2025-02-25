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
#include <stdio.h>

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

int	print_hex(unsigned int n)
{
	int count =  0;
	char hex_digits[] = "0123456789abcdef";

	if (n >= 16)
		count = count + print_hex(n / 16);
	count = count + write(1, &hex_digits[n % 16], 1);

	return count;
}

int ft_putnbr(int n)
{
	int count = 0;

	if( n == -2147483648)
	{
		count = count + write(1, "-2147483648", 11);
		return count;
	}

    if (n < 0)
    {
        ft_putchar('-');
        count++;
        n = -n;
    }

    if (n >= 10)
        count = count + ft_putnbr(n / 10);
    char num = (n % 10) + '0';
    count = count + write(1, &num, 1);
    
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
				count = count + ft_putnbr(va_arg(arg, int));
			else if (str[i + 1] == 'x')
				count = count + print_hex(va_arg(arg, unsigned int));
			else if (str[i + 1] == 's')
				count = count + ft_putstr(va_arg(arg, char *));
			else
				count = count + ft_putchar(str[i]);
			i++;
		}
		else
			count = count + ft_putchar(str[i]);
		i++;
	}
	va_end(arg);
	return (count);
}

int main(void)
{
    printf("Original: ");
    printf("Hello %s\n", "toto");
    ft_printf("ft_printf: ");
    ft_printf("Hello %s\n", "toto");
    

    printf("Original: ");
    printf("Magic %s is %d\n", "number", 42);
    ft_printf("ft_printf: ");
    ft_printf("Magic %s is %d\n", "number", 42);


    printf("Original: ");
    printf("Hexadecimal for %d is %x\n", 42, 42);
    ft_printf("ft_printf: ");
    ft_printf("Hexadecimal for %d is %x\n", 42, 42);

    return 0;
}

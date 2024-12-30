/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 14:23:26 by ksudyn            #+#    #+#             */
/*   Updated: 2024/12/13 14:23:28 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

int	ft_atoi(char *str)
{
	int n = 0;
    int i = 0;

	while (str[i] != '\0')
	{
		n = n * 10;
		n = n + str[i] - '0';
		i++;
	}
	return (n);
}

void	print_hex(int n)
{
	char hex_digits[] = "0123456789abcdef";

	if (n >= 16)
		print_hex(n / 16);
	write(1, &hex_digits[n % 16], 1);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
    {
        write(1, "\n", 1);
        return (0);
    }
	
    print_hex(ft_atoi(argv[1]));
	write(1, "\n", 1);
    return (0);
}
// se clacula el numero exadecimal del numero recibido
// usamo ft_atoi para converir la cadena recibida en numeros entero para trabajar con ellos
//con el print_hex calculas el numero exadecimal y lo escribimos
//usamos ambas funciones para que print_ex calcule un numero y no la cadena recibida
//COMPROBADO
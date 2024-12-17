/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 14:20:25 by ksudyn            #+#    #+#             */
/*   Updated: 2024/12/13 14:20:27 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"


int ft_atoi(char *str)//convierte una cadena de caracteres en un número entero.
{
    int res = 0;
    int i =  0;

    while (str[i])
    {
        res = res * 10 + str[i] - '0';
        i++;
    }
    return (res);
}

void	put_nbr(int n)//imprime un número entero en la salida estándar
{
	if (n >= 10)
		put_nbr(n / 10);
	char digit = n % 10 + '0';
	write(1, &digit, 1);
}

int	is_prime(int num)//determina si un número es primo
{
	int	i = 2;

	if (num <= 1)
		return (0);
	while (i * i <= num)
	{
		if (num % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int main(int argc, char **argv)
{
    if(argc != 2)
    {
        put_nbr(0);
        write(1, "\n", 1);
        return (0);
    }

    int num = ft_atoi(argv[1]);
    int result = 0;

    while(num > 0)
    {
        if(is_prime(num))
        result = result + num;
        num--;
    }
    put_nbr(result);
    write(1, "\n", 1);
    return (0);
}

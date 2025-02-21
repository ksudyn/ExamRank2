/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 14:23:13 by ksudyn            #+#    #+#             */
/*   Updated: 2024/12/13 14:23:15 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>//printf
#include <stdlib.h>//atoi
#include <unistd.h>//write

int calcular_mcd(int a, int b)
{
    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
    return a; // Cuando ambos son iguales, ese es el MCD
}

int main(int argc, char const *argv[])
{
    if (argc != 3)
    {
        write(1, "\n", 1);
        return 0;
    }

    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);

    if (num1 <= 0 || num2 <= 0)
    {
        write(1, "\n", 1);
        return 0;
    }

    // Calculamos el MCD y mostramos el resultado
    int mcd = calcular_mcd(num1, num2);
    printf("%d\n", mcd);

    return 0;
}
//en la funcion calcular_mcd calculamos el Maximo Comun Divisor
//La idea principal es restar el número menor del mayor hasta que ambos números sean iguales.
//lo cual será el MCD y ese valor es el MCD, que se retorna.
// luego usamos atoi para converir la cadena recibida en numeros entero para trabajar con ellos
//hacemos verificaciones para que sean numeros sin signo
// luego usamos calcular_mcd para calcular el MCD y mostramos el resultado con printf.
//COMPROBADO

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 14:15:36 by ksudyn            #+#    #+#             */
/*   Updated: 2024/12/13 18:48:54 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"
#include<stdlib.h>
#include<stdio.h>

int main(int argc, char **argv)
{
    if(argc != 2)
    {
        write(1, "\n", 1);
        return (0);
    }

    int i = 1;
    int number = atoi(argv[1]);

    while (number >= ++i)
    {
        if(number % i == 0)
        {
            printf("%d", i);

            if(number == i)
            {
                break;
            }
            printf("*");
            number = number / i;
            i = 1;
        }
    }
    write(1, "\n", 1);
    return (0);
}
//esta funcion toma un número entero positivo
//y muestra sus factores primos en la salida estándar, seguido de un salto de línea.
//Los factores deben mostrarse en orden ascendente y separados por '*'
//de manera que la expresión en la salida dé el resultado correcto
//convierto el numero recibido con atoi
//el numero primo a comprobar si es valido empieza en 1, si el resto es 0 es divisible
//por lo que entra y ese numero primo se imprime
//si los numero a comprobar son iguales hemos terminado
//si no se escribe * y se dividen los numeros para comprobarlo de nuevo.
//y se restablece i en 1 antes de empezar para que no de mal el resultado.

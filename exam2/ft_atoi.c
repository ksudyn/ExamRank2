/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 18:29:14 by ksudyn            #+#    #+#             */
/*   Updated: 2024/11/21 18:29:22 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_atoi(char *str)
{
    int result = 0; // Para guardar el número final
    int sign = 1;   // Para saber si es positivo o negativo
    int i = 0;      // Índice para recorrer la cadena
    int digit = 0;  // Para almacenar el valor numérico temporal de un carácter

    // Paso 1: Saltar los espacios en blanco iniciales
    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
    {
        i++;
    }
    // Paso 2: Verificar si hay un signo '+' o '-'
    if (str[i] == '-')
    {
        sign = -1;
        i++;
    }
    else if (str[i] == '+')
    {
        i++;
    }
    // Paso 3: Convertir los caracteres numéricos en un número entero
    while (str[i] >= '0' && str[i] <= '9')
    {
        digit = str[i] - '0';         // Convierte el carácter en su valor numérico
        result = (result * 10) + digit; // Agregar el dígito al resultado
        i++;
    }

    return (sign * result);
}

int main()
{
    char str1[] = "   -123";
    char str2[] = "42";
    char str3[] = "   +456";
    char str4[] = "  00789abc";

    printf("Resultado 1: %d\n", ft_atoi(str1)); // -123
    printf("Resultado 2: %d\n", ft_atoi(str2)); // 42
    printf("Resultado 3: %d\n", ft_atoi(str3)); // 456
    printf("Resultado 4: %d\n", ft_atoi(str4)); // 789

    return 0;
}



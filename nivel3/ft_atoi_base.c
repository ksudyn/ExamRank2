/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 14:21:36 by ksudyn            #+#    #+#             */
/*   Updated: 2024/12/13 14:21:38 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi_base(const char *str, int str_base)
{
    int result = 0;
    int sign = 1;
    int i = 0;
    int value;

    // Manejo del signo
    if (str[i] == '-')
    {
        sign = -1;
        i++;
    }

    // Recorremos la cadena
    while (str[i])
    {
        // Obtener el valor del carácter actual
        if (str[i] >= '0' && str[i] <= '9')
            value = str[i] - '0';
        else if (str[i] >= 'a' && str[i] <= 'f')
            value = str[i] - 'a' + 10;
        else if (str[i] >= 'A' && str[i] <= 'F')
            value = str[i] - 'A' + 10;
        else
            break; // Si encontramos un carácter no válido, detenemos el procesamiento

        // Verificamos que el valor del carácter sea válido para la base
        if (value >= str_base)
            break; // Si el valor excede la base, detenemos el procesamiento

        // Actualizamos el resultado
        result = result * str_base + value;

        // Avanzamos al siguiente carácter
        i++;
    }

    // Retornamos el resultado con el signo adecuado
    return result * sign;
}
//La función convierte una cadena de caracteres que representa un número 
//en una base específica (de 2 a 16) a un número entero en base 10. 
//Primero, verifica si la base es válida. 
//Luego, maneja un posible signo negativo al inicio. 
//Este bloque de código recorre cada carácter de la cadena str hasta llegar al final ('\0').
//Para cada carácter, determina su valor numérico dependiendo de si es un dígito ('0' a '9')
//o una letra hexadecimal ('a' a 'f' o 'A' a 'F').
//Si el carácter no es válido, retorna 0.
//Luego, verifica que el valor sea menor que la base (str_base).
//Luego actualiza el resultado
//multiplicando el valor acumulado por la base y sumando el valor del carácter actual.
//avanza al siguiente carácter de la cadena.
// y al final multiplica el result final por el signo.
//CORREGIDO Y COMPROBADO
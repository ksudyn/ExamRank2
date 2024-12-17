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
    if (str_base < 2 || str_base > 16)
        return 0;
    int result = 0;
    int sign = 1;
    int i = 0;
    
    if (str[i] == '-')
    {
        sign = -1;
        i++;
    }

    while (str[i] != '\0')
    {
        char c = str[i];
        int value = 0;

        if (c >= '0' && c <= '9')
            value = c - '0';
        else if (c >= 'a' && c <= 'f')
            value = c - 'a' + 10;
        else if (c >= 'A' && c <= 'F')
            value = c - 'A' + 10; 
        else
            return 0;

        if (value >= str_base)
            return 0;
        result = result * str_base + value;
        i++;
    }

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
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 14:03:14 by ksudyn            #+#    #+#             */
/*   Updated: 2024/12/13 14:03:16 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strrev(char *str)
{
    int i = 0;
    int j = 0;
    char temporary;

    // Comprobar si la cadena no es nula
    if (!str)
        return '\0';

    // Calcular la longitud de la cadena
    while (str[i])
        i++;

     // Ajustamos i para que apunte al último carácter válido
    i--;

    // Invertir la cadena copiando desde el final hacia el principio
    while (i > j)
    {
        temporary = str[i];   // Tomamos el carácter en la posición i
        str[i] = str[j];      // Ponemos el carácter en la posición j
        str[j] = temporary;   // Colocamos el carácter temporal en la posición j
        i--;
        j++;
    }

    return (str);
}
//es un swap caracter por caracter
// en el ejemlo "Hola Mundo".
//Al ejecutar la función, el contenido de la cadena se invierte.
//Los caracteres se intercambian de manera que:
//H (en la posición 0) se intercambia con o (en la última posición).
//o se intercambia con d, y así sucesivamente.
//El resultado es "odnuM aloH"

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 14:05:39 by ksudyn            #+#    #+#             */
/*   Updated: 2024/12/13 14:05:41 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char reverse_bits(unsigned char octet)
{
    int i = 8;                  // Contador de iteraciones (para recorrer los 8 bits)
    unsigned char res = 0;      // Variable para almacenar el resultado con los bits invertidos

    while (i > 0)               // Mientras no hayamos procesado todos los 8 bits
    {
        res = res * 2 + (octet % 2);  // Desplazamos el resultado hacia la izquierda (multiplicamos por 2) y añadimos el bit más bajo de octet
        octet = octet / 2;      // Dividimos octet entre 2 para eliminar el bit más bajo
        i--;                    // Reducimos el contador
    }

    return (res);               // Devolvemos el byte con los bits invertidos
}
// la funcion invierte bit a bit y devuelve el resultado
//res = res por 2 mas resto de octet yy luego octet se divide entre 2
unsigned char reverse_bits(unsigned char octet)
{
    unsigned char res = 0;  // Resultado con los bits invertidos
    int i = 8;              // Total de bits en un byte

    while (i > 0)
    {
        res = (res << 1) | (octet & 1); // Desplazamos res y añadimos el bit menos significativo de octet
        octet >>= 1;                    // Desplazamos octet hacia la derecha para procesar el siguiente bit
        i--;                            // Reducimos el contador
    }

    return res;
}
//Desplazamiento de bits: Usamos res << 1 para mover los bits existentes de res a la izquierda
//y octet & 1 para extraer el bit menos significativo de octet.
//En lugar de dividir octet por 2, usamos octet >>= 1 para mover todos los bits hacia la derecha. Esto es equivalente pero más rápido.
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 14:04:13 by ksudyn            #+#    #+#             */
/*   Updated: 2024/12/13 14:04:15 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int is_power_of_2(unsigned int n)
{
    // Si el número es 0, no es una potencia de 2
    if (n == 0)
        return 0;

    // Verificamos si el número tiene exactamente un solo bit en 1
    // Esto se hace con la operación (n & (n - 1)).
    // Si el número es una potencia de 2, el resultado será 0.
    if ((n & (n - 1)) == 0)
        return 1;  // Es una potencia de 2

    // Si no cumple la condición, no es una potencia de 2
    return 0;
}


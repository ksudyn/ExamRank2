/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 14:22:43 by ksudyn            #+#    #+#             */
/*   Updated: 2024/12/13 14:22:45 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int lcm(unsigned int a, unsigned int b)
{
	unsigned int n;	

	if (a == 0 || b == 0)
    {
        return (0);
    }

	if (a > b)
    {
        n = a;
    }	
	else
    {
        n = b;
    }
	while (1)
	{
		if (n % a == 0 && n % b == 0)
			return (n);
		n++;
	}
}
// Si alguno de los números es 0, devuelve 0 inmediatamente
// Establece el valor inicial de 'n' como el mayor de 'a' o 'b'
// Bucle infinito que busca el primer múltiplo común
//No hay un número fijo de iteraciones; el bucle continuará hasta que se cumpla la condición
// Si 'n' es divisible tanto por 'a' como por 'b', es el MCM
// Si no, incrementa 'n' en 1 y vuelve a comprobar
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 14:17:42 by ksudyn            #+#    #+#             */
/*   Updated: 2024/12/13 14:17:44 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{		
	if(argc != 2)
    {
       write(1, "\n", 1);
       return (0); 
    }

    int i = 0;
	int start;
	int end;
 
	while(argv[1][i])
    {
        i++;
    }
    i--;
    while(i >= 0)
	{
		while( argv[1][i] == '\0' || argv[1][i] == ' ' || argv[1][i] == '\t')
        {
            i--;
        }
        end = i;
		while(argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t')
        {
            i--;
        }
		start = i + 1;
		
		while(start <= end)
		{
            write (1, &argv[1][start],1);
            start++;		
		}
		if (i >= 0)
        {
            write(1, " ", 1);
        }
    }
	write(1, "\n", 1);
    return (0);
}
//Aqui se escribe una strin al reves añadinedo un espacio entre palabras, pero al final del nuevo strin no
//La condición if (i >= 0) es más adecuada que que if(i != 0), por que
//Evalúa correctamente si aún hay más palabras que procesar.
//Evita añadir un espacio extra al final del resultado.
//COMPROBADO
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 14:04:32 by ksudyn            #+#    #+#             */
/*   Updated: 2024/12/13 14:04:34 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
#include<stdio.h>

void last_word(char *str)
{
    int i = 0;
    int start = 0;
    int end = 0;
    while (str[i])
    {
        i++;
    }
    i--;
    while (str[i] == ' ' || (str[i] == '\t' && str[i] == '\0'))
    {
        i--;
    }
    while(str[i] == 0)
    {
      return;  
    }
    end = i;
    while (str[i] != ' ' && (str[i] != '\t' || str[i] != '\0'))
    {
        i--;
    }
    i++;
    start = i;
    while (start <= end)
    {
        write(1,&str[start],1);
        start++;
    }
}
int main (int argc,char **argv)
{
    if(argc != 2)
    {
         write(1,"\n",1);
         return(0);
    }
    last_word(argv[1]);
    write(1,"\n",1);
    return(0);
}
//aqui se escribe la ultima palabra de la cadena de texto
//se recorre todo el argumento y al llegar al final se pasa al siguiente bucle
//en el siguiente bucle si hay espacios se saltan hasta llegar a algo diferente
//al encontrar ese caracter sse guarda en la variable end y se sigue reduciendo hasta llegar a un esapcio
//en ese momento de llegar a un espacio se suma 1 y se guarda la posicion de start
//con otro bucle se comprueba si start es menos o igual de end, que son posiciones de la cadena de texto
//entoces desde la posicion start se escribe su caracter y se suma hasta sobrepasar end
//COMPROBADO
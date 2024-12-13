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
    while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
    {
        i--;
    }
    end = i;
    while (str[i] != 32 && (str[i] < 9 || str[i] > 13))
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
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 19:33:54 by ksudyn            #+#    #+#             */
/*   Updated: 2024/11/18 19:33:59 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>//para printf
#include <stdlib.h>//para atoi

int main(int argc, char *argv[])
{
	if (argc == 4)
	{
		if (argv[2][0] == '+')
			printf("%d", (atoi(argv[1]) + atoi(argv[3])));
		if (argv[2][0] == '-')
			printf("%d", (atoi(argv[1]) - atoi(argv[3])));
		if (argv[2][0] == '*')
			printf("%d", (atoi(argv[1]) * atoi(argv[3])));
		if (argv[2][0] == '/')
			printf("%d", (atoi(argv[1]) / atoi(argv[3])));
		if (argv[2][0] == '%')
			printf("%d", (atoi(argv[1]) % atoi(argv[3])));
	}
	printf("\n");
	return (0);
}
//COMPROBADO


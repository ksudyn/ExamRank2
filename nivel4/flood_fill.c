/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 14:15:03 by ksudyn            #+#    #+#             */
/*   Updated: 2024/12/13 14:15:05 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct s_point
{
    int x;
    int y;
} t_point;

void	comprobate(char **tab, t_point size, t_point cord, char to_fill)
{
	if (cord.y < 0 || cord.y >= size.y || cord.x < 0 || cord.x >= size.x || tab[cord.y][cord.x] != to_fill)
		return;
    //cord.x < 0 → estamos demasiado a la izquierda.
    //cord.x >= size.x → estamos demasiado a la derecha.
    //cord.y < 0 → estamos demasiado arriba.
    //cord.y >= size.y → estamos demasiado abajo.
	tab[cord.y][cord.x] = 'F';//Aquí cambiamos la posición actual a la letra 'F' (como si la pintáramos)
	comprobate(tab, size, (t_point){cord.x - 1, cord.y}, to_fill);//izquierda
	comprobate(tab, size, (t_point){cord.x + 1, cord.y}, to_fill);//derecha
	comprobate(tab, size, (t_point){cord.x, cord.y - 1}, to_fill);//arriba
	comprobate(tab, size, (t_point){cord.x, cord.y + 1}, to_fill);//abajo
}

void	flood_fill(char **tab, t_point size, t_point begin)
{
	comprobate(tab, size, begin, tab[begin.y][begin.x]);
}

//En un mapa 2d
//tab es el mapa o el arreglo bidimensional de caracteres (el dibujo o la zona que estamos llenando).
//size → el tamaño del mapa: (4, 4) (4 columnas y 4 filas), La x es la columna, y la y es la fila
//begin → (1, 1), las coordenadas en las que estamso al inicio
//to_fill es el carácter que queremos llenar en el mapa
//(por ejemplo, el carácter original que estamos reemplazando con 'F')
//Por ejemplo, si estamos buscando llenar las zonas de carácter 'B'
//y en la posición actual hay un 'A', esta condición será verdadera
//COMPROBADO
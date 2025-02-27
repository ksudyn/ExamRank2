/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 19:51:17 by ksudyn            #+#    #+#             */
/*   Updated: 2025/02/24 19:51:19 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int ft_strlen(char *str)
{
	int len = 0;
	while (str && str[len])
		len++;
    return len;
}

// Implementación de strchr (busca el primer '\n')
char *ft_strchr(char *str, int c)
{
	int i = 0;

    while (str && str[i])
	{
		if (str[i] == (char)c)
            return str;
        i++;
    }
    return NULL;
}

char *ft_strjoin(char *s1, char *s2)
{
    int len1 = ft_strlen(s1);
    int len2 = ft_strlen(s2);
    char *new_str = malloc(len1 + len2 + 1);
    int i = 0;
	int j = 0;

    if (!new_str)
        return NULL;
    while (s1 && s1[i])
        new_str[j++] = s1[i++];
    while (s2 && s2[i])
        new_str[j++] = s2[i++];
    new_str[j] = '\0';
    return new_str;
}

char *ft_strdup(char *str)
{
    int len = ft_strlen(str);
    char *dup = malloc(len + 1);
    int i = 0;

    if (!dup)
        return NULL;
    while (str && str[i])
	{
        dup[i] = str[i];
        i++;
    }
    dup[i] = '\0';
    return dup;
}

// Función para leer y acumular en el buffer estático
static char	*read_and_accumulate(int fd, char *remainder)
{
    char buffer[BUFFER_SIZE + 1];
    int bytes_read;
    char *temp;

    while ((bytes_read = read(fd, buffer, BUFFER_SIZE)) > 0)
	{
        buffer[bytes_read] = '\0';
        temp = remainder;
        remainder = ft_strjoin(remainder, buffer);
        free(temp);
        if (ft_strchr(remainder, '\n'))
            break;
    }
    return remainder;
}

// Función para extraer una línea hasta el '\n'
static char *extract_line(char *remainder)
{
    char *line;
    int len = 0;

    while (remainder[len] && remainder[len] != '\n')
        len++;
    line = malloc(len + 2);
    if (!line)
        return NULL;
    len = 0;
    while (remainder[len] && remainder[len] != '\n')
	{
        line[len] = remainder[len];
        len++;
    }
    if (remainder[len] == '\n')
	{
        line[len] = '\n';
        len++;
    }
    line[len] = '\0';
    return line;
}

// Función para guardar el resto después de la línea
static char	*save_remainder(char *remainder)
{
    char *new_remainder;
    char *newline_pos = ft_strchr(remainder, '\n');

    if (!newline_pos)
        return NULL;
    new_remainder = ft_strdup(newline_pos + 1);
    free(remainder);
    return new_remainder;
}

char *get_next_line(int fd)
{
    static char *remainder;
    char *line;

    if (fd < 0 || BUFFER_SIZE <= 0)
        return NULL;
    remainder = read_and_accumulate(fd, remainder);
    if (!remainder)
        return NULL;
    line = extract_line(remainder);
    remainder = save_remainder(remainder);
    return line;
}
//..................................................//
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>

char	*get_next_line(int fd)
{
	char	*ret = malloc(9999);
	char	c;
	int		i = 0;
	int		cpt = 0;

	if (fd < 0)
		return (NULL);
	while ((cpt = read(fd, &c, 1)) > 0)
	{
		ret[i] = c;
		i++;
		if (c == '\n')
			break ;
	}
	if (i == 0 || cpt < 0)
	{
		free(ret);
		return (NULL);
	}
	ret[i] = '\0';
	return (ret);
}

int		main(int argc, char **argv)
{
	int 	fd = 0;
	char	*line;

	if (argc > 1)
		fd = open(argv[1], O_RDONLY);
	line = get_next_line(fd);
	while (line != NULL)
	{
		printf("line |%s", line);
		free(line);
		line = get_next_line(fd);
	}
	return (0);
}
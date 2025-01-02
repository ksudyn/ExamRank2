#include <unistd.h>

char    *rev_print(char *str)
{
        int     i = 0;

        // Encontrar la longitud de la cadena
        while (str[i])
                i++;

        // Imprimir la cadena en orden inverso
        i--; // Retrocedemos al último carácter válido
        while (i >= 0)
        {
                write(1, &str[i], 1);
                i--;
        }

        // Imprimir salto de línea
        write(1, "\n", 1);

        // Devolver la cadena original
        return (str);
}

int main (int argc, char **argv)
{
        if(argc != 2)
        {
                write(1, "\n", 1);
                return (0);
        }
        rev_print(argv[1]);
        return (0);
}
//COMPROBADO
//el ejercicio a cambiado enlugar de pedir funcion pide prigrama,
//solo me da bien si es con el main
#include <unistd.h>

void search_and_replace(char *str, char l, char k)
{
    int i = 0;

    while (str[i] != '\0')
    {
        if (str[i] == l)
        {
            str[i] = k;
        }
        i++;
    }
}

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        write(1, "\n", 1);
        return (0);
    }

    search_and_replace(argv[1], argv[2][0], argv[3][0]);

    if(argv[2][1]== '\0' && argv[3][1] == '\0')
    {   
        int i = 0;
        while (argv[1][i] != '\0')
        {
            write(1, &argv[1][i], 1);
            i++;
        }
        write(1, "\n", 1);
        return (0);
    }
    else
    {
       write(1, "\n", 1);
       return (0); 
    }
}
//COMPROBADO

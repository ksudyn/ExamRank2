#include <unistd.h>

void ulstr(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        char c;
        
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            c = str[i] - 32; 
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            c = str[i] + 32; 
        }
        else
        {
            c = str[i]; 
        }

        write(1, &c, 1);
        i++;
    }
    write(1, "\n", 1);
}

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        write(1, "\n", 1);
        return (0);
    }

    ulstr(argv[1]);

    return (0);
}
//COMPROBADO
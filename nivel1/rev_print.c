#include <unistd.h>
#include <stdlib.h>

char	*rev_print(char *str)
{
	int		i = 0;
	int		j = 0;
	char	*new_string;

		if (!str || str[0] == '\0')
	{
		write(1, "\n", 1);
		return (NULL);
	}

	while (str[i])
		i++;
	
	new_string = (char *)malloc((i + 1) * sizeof(char));
	if (!new_string)
		return (NULL);

	while (i > 0)
	{
		new_string[j] = str[i -1];
		j++;
		i--;
	}
	
	new_string[j] = '\0';

	write(1, new_string, j);
	write(1, "\n", 1);

	return (new_string);
}

int main(void)
{
  rev_print("Hello world");
  rev_print("tnirp esreveR");
  rev_print("");
}
//REVISAR Y CORREGIR
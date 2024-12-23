#include <unistd.h>

void	write_number(int number)
{
	if (number > 9)
	{
		write_number(number / 10);
	}
	char c = (number % 10 + '0');
	write (1, &c, 1);
}

int		main()
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 15 == 0)
			write (1, "fizzbuzz", 8);
		else if (i % 3 == 0)
			write (1, "fizz", 4);
		else if (i % 5 == 0)
			write (1, "buzz", 4);
		else
			write_number(i);

		write (1, "\n", 1);
		i++;
	}
	return 0;
}

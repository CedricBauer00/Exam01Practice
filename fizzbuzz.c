#include <unistd.h>


void	convert(int i)
{
	char c;

	if (i > 9)
		convert(i / 10);
	c = (i % 10) + '0';
	write(1, &c, 1);
}


int main()
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0)
			write(1, "fizz", 4);
		if (i % 5 == 0)
			write(1, "buzz", 4);
		else if (i % 5 != 0 && i % 3 != 0)
			convert(i);
		write(1, "\n", 1);
		i++;
	}
}
#include <unistd.h>


void	convert(int c)
{
	char i;

	if (c > 9)
		convert(c / 10);
	i = (c % 10) + '0';
	write (1, &i, 1);
}

int main()
{
	int c;

	c = 1;
	while (c <= 100)
	{
		if (c % 3 == 0)
			write (1, "fizz", 4);
		if (c % 5 == 0)
			write (1, "buzz", 4);
		if (c % 3 != 0 && c % 5 != 0)
			convert(c);
		write (1, "\n", 1);
		c++;
	}
}
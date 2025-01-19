// #include <unistd.h>


// void	convert(int c)
// {
// 	char i;

// 	if (c > 9)
// 		convert(c / 10);
// 	i = (c % 10) + '0';
// 	write (1, &i, 1);
// }

// int main()
// {
// 	int c;

// 	c = 1;
// 	while (c <= 100)
// 	{
// 		if (c % 3 == 0)
// 			write (1, "fizz", 4);
// 		if (c % 5 == 0)
// 			write (1, "buzz", 4);
// 		if (c % 3 != 0 && c % 5 != 0)
// 			convert(c);
// 		write (1, "\n", 1);
// 		c++;
// 	}
// }

// #include <unistd.h>

// void	convert(int i)
// {
// 	char c;

// 	if (i > 9)
// 		convert(i / 10);
// 	c = (i % 10) + '0';
// 	write(1, &c, 1);
// }


// int main()
// {
// 	int i;

// 	i = 1;
// 	while (i < 100)
// 	{
// 		if (i % 3 == 0)
// 			write(1, "fizz", 4);
// 		if (i % 5 == 0)
// 			write(1, "buzz", 4);
// 		if (i % 3 != 0 && i % 5 != 0)
// 			convert(i);
// 		write(1, "\n", 1);
// 		i++;
// 	}
// }



// #include <unistd.h>

// void	convert(int i)
// {
// 	char c;

// 	if (i > 9)
// 		convert(i / 10);
// 	c = (i % 10) + '0';
// 	write(1, &c, 1);
// }


// int main()
// {
// 	int i;

// 	i = 1;
// 	while (i <= 100)
// 	{
// 		if (i % 3 == 0)
// 			write(1, "fizz", 4);
// 		if (i % 5 == 0)
// 			write(1, "buzz", 4);
// 		if (i % 3 != 0 && i % 5 != 0)
// 			convert(i);
// 		write(1, "\n", 1);
// 		i++;
// 	}
// }

void	convert(int c)
{
	char i;

	if (c > 9)
		convert(c / 10);
	i = (c % 10) + '0';
	write(1, &i, 1);
}

int main()
{
	int c;

	c = 1;
	while (c < 100)
	{
		if (c % 3 == 0)
			write(1, "fizz", 4);
		if (c % 5 == 0)
			write(1, "buzz", 4);
		if (c % 3 != 0 && c % 5 != 0)
			convert (c);
		write(1, "\n", 1);
		c++;
	}
}

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
		if (i % 3 != 0 && i % 5 != 0)
			convert(i);
		write(1, "\n", 1);
		i++;
	}
}
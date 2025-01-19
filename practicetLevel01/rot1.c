#include <unistd.h>

int main(int argc, char *argv[])
{
	int c;
	char i;

	c = 0;
	if (argc == 2)
	{
		while (argv[1][c] != '\0')
		{
			if (argv[1][c] <= 'Y')
			{
				i = argv[1][c] +1;
				write(1, &i, 1);
			}
			else if (argv[1][c] == 'Z')
				write(1, "A", 1);
			else if (argv[1][c] <= 'y')
			{
				i = argv[1][c] + 1;
				write(1, &i, 1);
			}
			else if (argv[1][c] == 'z')
				write(1, "a", 1);
			c++;
		}
	}
	write(1, "\n", 1);
}
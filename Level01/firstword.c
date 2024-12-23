#include <unistd.h>

int main(int argc, char *argv[])
{
	int c;

	c = 0;
	if (argc == 2)
	{
		while (argv[1][c] == ' ' || argv[1][c] == '\t')
			c++;
		while (argv[1][c] != ' ' && argv[1][c] != '\t' && argv[1][c] != '\0')
		{
			write(1, &argv[1][c], 1);
			c++;
		}
	}
	write(1, "\n", 1);
}
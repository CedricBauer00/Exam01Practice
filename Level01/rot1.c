#include <unistd.h>


int main(int argc, char *argv[])
{
	int i;
	char c;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Y')
				c = argv[1][i] + 1;
			else if (argv[1][i] == 'Z')
				c = argv[1][i] - 25;
			else if (argv[1][i] >= 'a' && argv[1][i] <= 'y')
				c = argv[1][i] + 1;
			else if (argv[1][i] == 'z')
				c = argv[1][i] - 25;
			else
				c = argv[1][i];
			write(1, &c, 1);
			i++;
		}
	}
	write(1, "\n", 1);
}





#include <unistd.h>


int main(int argc, char *argv[])
{
	int i;
	char c;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Y')
				c = argv[1][i] + 1;
			else if (argv[1][i] == 'Z')
				c = 'A';
			else if (argv[1][i] >= 'a' && argv[1][i] <= 'y')
				c = argv[1][i] + 1;
			else if (argv[1][i] == 'z')
				c = 'a';
			else
				c = argv[1][i];
			write(1, &c, 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
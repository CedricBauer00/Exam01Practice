#include <unistd.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	int i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
			i++;
		i--;
		while (i > 0 && argv[1][i] != ' ' && argv[1][i] != '\t')
			i--;
		// printf("%d\n", i);/
		i++;
		while (argv[1][i])
		{
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
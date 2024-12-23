#include <unistd.h>
#include <stdio.h>
int main(int argc, char *argv[])
{
	int i;
	int j;
	int k;
	char c;

	k = 0;
	j = 0;
	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				j = argv[1][i] - 65;
				k = 26 -j;
				c = k + 64;
				write(1, &c, 1);
			}
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				j = argv[1][i] - 97;
				k = 26 - j;
				c = k + 96;
				write(1, &c, 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
}
// #include <unistd.h>
// #include <stdio.h>

// int main(int argc, char *argv[])
// {
// 	int c;
// 	int j;

// 	j = 0;
// 	c = 0;
// 	if (argc == 2)
// 	{
// 		while (argv[1][c] != '\0')
// 		{
// 			if (argv[1][c] >= 'A' && argv[1][c] <= 'Z')
// 				j = argv[1][c] -64;
// 			if (argv[1][c] >= 'a' && argv[1][c] <= 'z')
// 				j = argv[1][c] - 96;
// 			while (j > 0)
// 			{
// 				write(1, &argv[1][c], 1);
// 				j--;
// 			}
// 		c++;
// 		}
// 	}
// 	write(1, "\n", 1);
// }


#include <unistd.h>

int main(int argc, char *argv[])
{
	int i;
	int index;

	index = 0;
	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				index = argv[1][i] - 96;
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				index = argv[1][i] - 64;
			else
				index = 1;
			while (index > 0)
			{
				write(1, &argv[1][i], 1);
				index--;
			}
			i++;
		}
	}
	write(1, "\n", 1);
}
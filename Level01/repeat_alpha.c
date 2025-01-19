#include <unistd.h>

int main(int argc, char *argv[])
{
	int c;
	int i;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				c = argv[1][i] - 64;
			else if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				c = argv[1][i] - 96;
			else
				c = 1;
			while (c > 0)
			{
				write(1, &argv[1][i], 1);
				c--;
			}
			i++;
		}
	}
	write(1, "\n", 1);
}


// #include <unistd.h>
// #include <stdio.h>
// int main(int argc, char *argv[])
// {
// 	int i;
// 	int j;

// 	j = 0;
// 	i = 0;
// 	if (argc == 2)
// 	{
// 		while (argv[1][i])
// 		{
// 			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
// 				j = argv[1][i] - 96;
// 			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
// 				j = argv[1][i] - 64;
// 			else
// 				j = 1;
// 			while (j > 0)
// 			{
// 				write(1, &argv[1][i], 1);
// 				j--;
// 			}
// 			i++;
// 		}
// 	}
// 	write(1, "\n",1 );
// }
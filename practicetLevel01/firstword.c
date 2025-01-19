// #include <unistd.h>

// int main(int argc, char *argv[])
// {
// 	int c;

// 	c = 0;
// 	if (argc == 2)
// 	{
// 		while (argv[1][c] == ' ' || argv[1][c] == '\t')
// 			c++;
// 		while (argv[1][c] != '\0' && argv[1][c] != ' ' && argv[1][c] != '\t')
// 		{
// 			write(1, &argv[1][c], 1);
// 			c++;
// 		}
// 	}
// 	write(1, "\n", 1);
// }



#include <unistd.h>

int main(int argc, char *argv[])
{
	int i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;
		while (argv[1][i] != ' ' && argv[1][i] != '\t' && argv[1][i] != '\0')
		{
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
// #include <unistd.h>


// int main(int argc, char *argv[])
// {
// 	int	i;

// 	i = 0;
// 	if (argc == 2)
// 	{
// 		while (argv[1][i] != '\0')
// 		{
// 			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
// 			{
// 				argv[1][i] = argv[1][i] + 32;
// 				write(1, &argv[1][i], 1);
// 			}
// 			else if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
// 			{
// 				argv[1][i] = argv[1][i] - 32;
// 				write(1, &argv[1][i], 1);
// 			}
// 			i++;
// 		}
// 	}
// 	write(1, "\n", 1);
// }




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
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				c = argv[1][i] + 32;
			else if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				c = argv[1][i] - 32;
			else
				c = argv[1][i];
			write(1, &c, 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
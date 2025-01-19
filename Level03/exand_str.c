// #include <unistd.h>

// int main(int argc, char *argv[])
// {
// 	int i;
// 	int k;

// 	k = 0;
// 	i = 0;
// 	if (argc == 2)
// 	{
// 		while (argv[1][i])
// 		{
// 			while (argv[1][i] == ' ' || argv[1][i] == '\t')
// 				i++;
// 			while (argv[1][i] != '\0' && argv[1][i] != ' ' && argv[1][i] != '\t')
// 			{
// 				write(1, &argv[1][i], 1);
// 				i++;
// 			}
// 			if (argv[1][i] != '\0')
// 			{
// 				write(1, " ", 1);
// 				write(1, " ", 1);
// 				write(1, " ", 1);
// 				// while (k <= 3)
// 				// {
// 				// 	write(1, " ", 1);
// 				// 	k++;
// 				// }
// 			}
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
		while (argv[1][i])
		{
			while (argv[1][i] == ' ' || argv[1][i] == '\t')
				i++;
			while (argv[1][i] != '\0' && argv[1][i] != ' ' && argv[1][i] != '\t')
			{
				write(1, &argv[1][i], 1);
				i++;
			}
			if (argv[1][i] != '\0')
			{
				write(1, " ", 1);
				write(1, " ", 1);
				write(1, " ", 1);
			}
		}
	}
	write(1, "\n", 1);
}
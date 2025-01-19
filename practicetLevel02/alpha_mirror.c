// #include <unistd.h>

// int main(int argc, char*argv[])
// {
// 	int i;
// 	int j;
// 	int k;
// 	char c;

// 	k = 0;
// 	j = 0;
// 	i = 0;
// 	if (argc == 2)
// 	{
// 		while (argv[1][i] != '\0')
// 		{
// 			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
// 			{
// 				j = argv[1][i] -64;
// 				k = 26 - j;
// 				c = k + 65;
// 				write(1, &c, 1);
// 			}
// 			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
// 			{
// 				j = argv[1][i] - 96;
// 				k = 26 - j;
// 				c = k + 97;
// 				write(1, &c, 1);
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
	int j;
	int k;
	char c;

	c = 0;
	i = 0;
	j = 0;
	k = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				j = argv[1][i] - 64;
				k = 26 - j;
				c = k + 65;
			}
			else if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				j = argv[1][i] -96;
				k = 26 - j;
				c = k + 97;
			}
			write(1, &c, 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
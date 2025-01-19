// #include <unistd.h>

// int main(int argc, char *argv[])
// {
// 	int c;
// 	char i;

// 	c = 0;
// 	if (argc == 2)
// 	{
// 		while (argv[1][c] != '\0')
// 		{
// 			if (argv[1][c] >= 'A' && argv[1][c] <= 'Z')
// 			{
// 				if (argv[1][c] <= 'M')
// 				{
// 					i = argv[1][c] + 13;
// 					write(1, &i, 1);
// 				}
// 				else
// 				{
// 					i = argv[1][c] - 13;
// 					write(1, &i, 1);
// 				}
// 			}
// 			if (argv[1][c] >= 'a' && argv[1][c] <= 'z')
// 			{
// 				if (argv[1][c] <= 'm')
// 				{
// 					i = argv[1][c] + 13;
// 					write(1, &i, 1);
// 				}
// 				else
// 				{
// 					i = argv[1][c] -13;
// 					write(1, &i, 1);
// 				}
// 			}
// 			c++;
// 		}
// 	}
// 	write(1, "\n", 1);
// }

#include <unistd.h>

int main(int argc, char *argv[])
{
	int i;
	char c;

	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				if (argv[1][i] <= 'm')
					c = argv[1][i] + 13;
				else
					c = argv[1][i] - 13;
			}
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				if (argv[1][i] <= 'M')
					c = argv[1][i] + 13;
				else
					c = argv[1][i] - 13;
			}
			else
				c = argv[1][i];
			write(1, &c, 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
// #include <unistd.h>

// int main(int argc, char *argv[])
// {
// 	int i;
// 	char c;

// 	i = 0;
// 	if (argc == 2)
// 	{
// 		while (argv[1][i])
// 		{
// 			if (argv[1][i] >= 'a' && argv[1][i] <= 'z' && (argv[1][i + 1] == ' ' || argv[1][i + '\t'] || argv[1][i + 1] == '\0'))
// 				c = argv[1][i] - 32;
// 			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z' && (argv[1][i + 1] != ' ' || argv[1][i + 1] != '\t' || argv[1][i] != '\0'))
// 				c = argv[1][i] + 32;
// 			else
// 				c = argv[1][i];
// 			write(1, &c, 1);
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
	char c;

	i = 0;
	j = 0;
	if (argc > 1)
	{
		while (argc > j)
		{
			i = 0;
			while (argv[j][i])
			{
				while (argv[j][i] == ' ' || argv[j][i] == '\t')
				{
					write(1, &argv[j][i], 1);
					i++;
				}
				if ((argv[j][i + 1] == ' ' || argv[j][i + 1] == '\t' || argv[j][i + 1] == '\0') && argv[j][i] >= 'a' && argv[j][i] <= 'z')
					c = argv[j][i] - 32;
				else if ((argv[j][i + 1] != ' ' && argv[j][i + 1] != '\t') && argv[j][i] >= 'A' && argv[j][i] <= 'Z')
					c = argv[j][i] + 32;
				else
					c = argv[j][i];
				write(1, &c, 1);
				i++;
			}
			write(1,"\n", 1);
			j++;
		}
	}
	if (argc == 1)
		write(1, "\n", 1);
}
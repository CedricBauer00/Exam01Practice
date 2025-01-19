#include <unistd.h>

int main(int argc, char *argv[])
{
	int i;
	int j;

	j = 0;
	i = 0;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			while (argv[2][j])
			{
				if (argv[2][j] == argv[1][i])
					break ;
				j++;
			}
			i++;
		}
		if (argv[2][j] == '\0')
			write(1, "0", 1);
		else
			write(1, "1", 1);
	}
	write(1, "\n", 1);
}
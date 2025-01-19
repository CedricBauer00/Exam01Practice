#include <unistd.h>

int main(int argc, char *argv[])
{
	int i;
	int start;
	int end;

	i = 0;
	start = 0;
	end = 0;
	if (argc == 2)
	{
		while (argv[1][end] != '\0')
			end++;
		end--;
		start = end;
		while (start > 0)
		{
			while (argv[1][start] != ' ' && start > 0)
				start--;
			i = start;
			if (start > 0)
				i++;
			while (i <= end)
			{
				write(1, &argv[1][i], 1);
				i++;
			}
			if (start > 0)
				write(1, " ", 1);
			start--;
			end = start;
		}
	}
	write(1, "\n", 1);
}
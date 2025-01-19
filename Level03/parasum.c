#include <unistd.h>

int main(int argc, char *argv[])
{
	int i;
	char c;
	i = 0;
	if (argc)
	{
		c = (argc - 1) + '0';
		write(1, &c, 1);
	}
	write(1, "\n", 1);
}
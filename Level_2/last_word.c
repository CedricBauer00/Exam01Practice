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
// 			i++;
// 		i--;
// 		while (argv[1][i] == ' ' || argv[1][i] == '\t')
// 			i--;
// 		j = i;
// 		while (argv[1][j] != ' ' && argv[1][j] != '\t')
// 			j--;
// 		while (argv[1][j] != ' ' && argv[1][j] != '\t')
// 			j--;
// 		j++;
// 	// printf("i = %d\n", i);
// 	// printf("j = %d\n", j);	
// 	// printf("char i = %c\n", argv[1][i]);
// 	// printf("char j = %c\n", argv[1][j]);
// 		while (j <= i)
// 		{
// 			write(1, &argv[1][j], 1);
// 			j++;
// 		}
// 	}
// 	write(1, "\n", 1);
// }


// printf("j = %d\n", j);

// write(1, "passed\n", 7);

//Go     Hi   



#include <unistd.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (argc == 2)
	{
		while (argv[1][i])
			i++; // i = '\0'
		i--;
		while (i > 0 && (argv[1][i] == ' ' || argv[1][i] == '\t'))
			i--;
		while (argv[1][i] != '\0' && argv[1][i] != ' ' && argv[1][i] != '\t')
			i--;
		i++;
		while (argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t')
		{
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	// printf("%d", i);
	// write(1, &argv[1][i], 1);
	write(1, "\n", 1);
}

// #include <unistd.h>

// int main(int argc, char *argv[])
// {
// 	int i;
// 	int j;

// 	i = 0;
// 	j = 0;
// 	if (argc == 2)
// 	{
// 		while (argv[1][i] != '\0')
// 			i++;
// 		i--;
// 		while (i > 0 && argv[1][i] != ' ' && argv[1][i] != '\t')
// 			i--;
// 		i++;
// 		while (argv[1][i] != ' ' && argv[1][i] != '\t')
// 		{
// 			write(1, &argv[1][i], 1);
// 			i++;
// 		}
// 		printf("i = %d\n", i);
// 		// write(1, &argv[1][i], 1);
// 		write(1, "\n", 1);
// 	}
// }
// // hello no me  
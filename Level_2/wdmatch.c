// #include <unistd.h>
// #include <stdio.h>

// int main(int argc, char *argv[])
// {
// 	int i;
// 	int j;

// 	if (argc == 3)
// 	{
// 		while (argv[1][i])
// 		{
// 			while (argv[2][j])
// 			{
// 				if (argv[2][j] == argv[1][i])
// 					break ;
// 				j++;
// 			}
// 			i++;
// 		}
// 		i = 0;
// 		// printf("%d\n", j);
// 		// printf("%c\n", argv[2][j]);
// 		if (argv[2][j] != '\0')
// 		{
// 			while (argv[1][i])
// 			{
// 				write(1, &argv[1][i], 1);
// 				i++;
// 			}
// 		}
// 	}
// 	write(1, "\n", 1);
// }


// // faya" "fgvvfdxcacpolhyghbreda


// #include <unistd.h>

// int main(int argc, char *argv[])
// {
// 	int i;
// 	int j;

// 	j = 0;
// 	i = 0;
// 	if (argc == 3)
// 	{
// 		while (argv[1][i])
// 		{
// 			while (argv[2][j] != '\0')
// 			{
// 				if (argv[2][j] == argv[1][i])
// 					break  ;
// 				j++;
// 			}
// 			i++;
// 		}
// 		i = 0;
// 		if (argv[2][j] != '\0')
// 		{
// 			while (argv[1][i])
// 			{
// 				write(1, &argv[1][i], 1);
// 				i++;
// 			}
// 		}
// 	}
// 	write(1, "\n", 1);
// }


// #include <unistd.h>

// int main(int argc, char *argv[])
// {
// 	int i;
// 	int j;

// 	j = 0;
// 	i = 0;
// 	if (argc == 3)
// 	{
// 		while (argv[1][i])
// 		{
// 			while (argv[2][j])
// 			{
// 				if (argv[1][i] == argv[2][j])
// 					break ;
// 				j++;
// 			}
// 			i++;
// 		}
// 		i = 0;
// 		if (argv[2][j] != '\0')
// 		{
// 			while (argv[1][i])
// 			{
// 				write(1, &argv[1][i], 1);
// 				i++;
// 			}
// 		}
// 	}
// 	write(1, "\n", 1);
// }



// #include <unistd.h>

// int main(int argc, char *argv[])
// {
// 	int i;
// 	int j;

// 	j = 0;
// 	i = 0;
// 	if (argc == 3)
// 	{
// 		while (argv[1][i])
// 		{
// 			while (argv[2][j])
// 			{
// 				if (argv[1][i] == argv[2][j])
// 					break ;
// 				j++;
// 			}
// 			i++;
// 		}
// 		i = 0;
// 		if (argv[2][j] != '\0')
// 		{
// 			while (argv[1][i])
// 			{
// 				write(1, &argv[1][i], 1);
// 				i++;
// 			}
// 		}
// 	}
// 	write(1, "\n", 1);
// }



// #include <unistd.h>

// int main(int argc, char *argv[])
// {
// 	int i;
// 	int j;

	j = 0;
	i = 0;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			while (argv[2][j])
			{
				if (argv[1][i] == argv[2][j])
					break ;
				j++;
			}
			i++;
		}
		i = 0;
		if (argv[2][j] != '\0')
		{
			while (argv[1][i])
			{
				write(1, &argv[1][i], 1);
				i++;
			}
		}
	}
	write(1, "\n", 1);
}



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
				if (argv[1][i] == argv[2][j])
					break ;
				j++;
			}
			i++;
		}
		i = 0;
		if (argv[2][j] != '\0')
		{
			while (argv[1][i])
			{
				write(1, &argv[1][i], 1);
				i++;
			}
		}
	}
	write(1, "\n", 1);
}

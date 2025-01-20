// #include <unistd.h>
// #include <stdio.h>

// int main(int argc, char *argv[])
// {
// 	int i;
// 	int j;

// 	i = 0;
// 	if (argc == 3)
// 	{
// 		// write(1, &argv[1][i], 1);
// 		// i++;
// 		while (argv[1][i])
// 		{
// 			j = i - 1;
// 			// printf("i = %d\n", i);
// 			// printf("j = %d\n", j);
// 			while (j >= 0)
// 			{
// 				if (argv[1][i] == argv[1][j])
// 					break ;
// 				if (j <= 0)
// 					write(1, &argv[1][i], 1);
// 				j--;
// 			}
// 			i++;
// 		}
// 	}
// 	write(1, "\n", 1);
// }

// $>./union zpadinton "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
// zpadintoqefwjy$

// $>./inter "padinton" "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
// padinto$

// inter zpadinton "paqefwtdjetyiytjneytjoeyjnejeyj"
// padinton



// #include <unistd.h>

// int main(int argc, char *argv[])
// {
// 	int i;
// 	int j;
// 	int seen[256] = {0};

// 	i = 0;
// 	if (argc == 3)
// 	{
// 		while (argv[1][i])
// 		{
// 			if (!seen[argv[1][i]])
// 			{
// 				write(1, &argv[1][i], 1);
// 				seen[argv[1][i]] = 1;
// 			}
// 			i++;
// 		}
// 		while (argv[2][j])
// 		{
// 			if (!seen[argv[2][j]])
// 			{
// 				write(1, &argv[2][j], 1);
// 				seen[argv[2][j]] = 1;
// 			}
// 		j++;
// 		}
// 	}
// 	write(1, "\n", 1);
// }


// #include <unistd.h>

// int main(int argc, char *argv[])
// {
// 	int i;
// 	int j;
// 	int seen[256] = {0};

// 	if (argc == 3)
// 	{
// 		while (argv[1][i])
// 		{
// 			if (!seen[argv[1][i]])
// 			{
// 				write(1, &argv[1][i], 1);
// 				seen[argv[1][i]] = 1;
// 			}
// 			i++;
// 		}
// 		while (argv[2][j])
// 		{
// 			if (!seen[argv[2][j]])
// 			{
// 				write(1, &argv[2][j], 1);
// 				seen[argv[2][j]] = 1;
// 			}
// 			j++;
// 		}
// 	}
// 	write(1, "\n", 1);
// }


// #include <unistd.h>

// int main(int argc, char *argv[])
// {
// 	int i;
// 	int j;
// 	int seen[256] = {0};

// 	i = 0;
// 	j = 0;
// 	if (argc == 3)
// 	{
// 		while (argv[1][i])
// 		{
// 			if (!seen[argv[1][i]])
// 			{
// 				write(1, &argv[1][i], 1);
// 				seen[argv[1][i]] = 1;
// 			}
// 			i++;
// 		}
// 		while (argv[2][j])
// 		{
// 			if (!seen[argv[2][j]])
// 			{
// 				write(1, &argv[2][j], 1);
// 				seen[argv[2][j]] = 1;
// 			}
// 			j++;
// 		}
// 	}
// 	write(1, "\n", 1);
// 	return (0);
// }



// #include <unistd.h>

// int main(int argc, char *argv[])
// {

// 	if (argc == 3)
// 	{
// 		int i = 0;
// 		int j = 0;
// 		unsigned char seen[256] = {0};
// 		while (argv[1][i])
// 		{
// 			if (!seen[(unsigned char)argv[1][i]])
// 			{
// 				write(1, &argv[1][i], 1);
// 				seen[(unsigned char)argv[1][i]] = 1;
// 			}
// 			i++;
// 		}
// 		while (argv[2][j])
// 		{
// 			if (!seen[(unsigned char)argv[2][j]])
// 			{
// 				write(1, &argv[2][j], 1);
// 				seen[(unsigned char)argv[2][j]] = 1;
// 			}
// 			j++;
// 		}
// 	}
// 	write(1, "\n", 1);
// 	return (0);
// }

// #include <unistd.h>

// int main(int ac, char **av)
// {
//     if (ac == 3)
//     {
//         unsigned char seen[256] = {0};
//         int i = 0;
//         int j = 0;

//         while (av[1][i])
//         {
//             if (!seen[(unsigned char)av[1][i]])
//             {
//                 write(1, &av[1][i], 1);
//                 seen[(unsigned char)av[1][i]] = 1;
//             }
//             i++;
//         }
//         while (av[2][j])
//         {
//             if (!seen[(unsigned char)av[2][j]])
//             {
//                 write(1, &av[2][j], 1);
//                 seen[(unsigned char)av[2][j]] = 1;
//             }
//             j++;
//         }
//     }
//     write(1, "\n", 1);
//     return 0;
// }


#include <unistd.h>

int main(int argc, char *argv[])
{
	int i;
	int j;
	unsigned char seen[256] = {0};

	i = 0;
	j = 0;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			if (!seen[(unsigned char)argv[1][i]])
			{
				write(1, &argv[1][i], 1);
				seen[(unsigned char)argv[1][i]] = 1;
			}
			i++;
		}
		while (argv[2][j])
		{
			if (!seen[(unsigned char)argv[2][j]])
			{
				write(1, &argv[2][j], 1);
				seen[(unsigned char)argv[2][j]] = 1;
			}
			j++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

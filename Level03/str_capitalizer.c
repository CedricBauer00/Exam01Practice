#include <unistd.h>
#include <stdio.h>

// int main(int argc, char *argv[])
// {
// 	int i;
// 	int j;
// 	char c;

// 	j = 1;
// 	i = 0;
// 	if (argc > 1)
// 	{
// 		while (j < argc)
// 		{
// 			i = 0;
// 			while (argv[j][i] != '\0')
// 			{
// 				while (argv[j][i] == ' ' || argv[j][i] == '\t')
// 				{
// 					write(1, &argv[j][i], 1);
// 					i++;
// 				}
// 				while (argv[j][i] != '\0' && argv[j][i] != ' ' && argv[j][i] != '\t')
// 				{
// 					if (i == 0 && argv[j][i] >= 'a' && argv[j][i] <= 'z')
// 						c = argv[j][i] - 32;
// 					else if ((argv[j][i - 1] == ' ' || argv[j][i - 1] == '\t') && argv[j][i] >= 'a' && argv[j][i] <= 'z')
// 						c = argv[j][i] - 32;
// 					else if ((argv[j][i - 1] != ' ' && argv[j][i - 1] != '\t') && argv[j][i] >= 'A' && argv[j][i] <= 'Z')
// 						c = argv[j][i] + 32;
// 					else
// 						c = argv[j][i];
// 					write(1, &c, 1);
// 					i++;
// 				}
// 			}
// 			write(1, "\n", 1);
// 			j++;
// 		}
// 	}
// 	if (argc == 1)
// 		write(1, "\n", 1);
// }


// int main(int argc, char *argv[])
// {
// 	int i;
// 	int j;
// 	char c;

// 	i = 0;
// 	j = 1;
// 	if (argc > 1)
// 	{
// 		while (j < argc)
// 		{
// 			i = 0;
// 			while (argv[j][i] != '\0')
// 			{
// 				while (argv[j][i] == ' ' || argv[j][i] == '\t')
// 				{
// 					write(1, &argv[j][i], 1);
// 					i++;
// 				}
// 				while (argv[j][i] != '\0' && argv[j][i] != ' ' && argv[j][i] != '\t')
// 				{
// 					if (i == 0 && argv[j][i] >= 'a' && argv[j][i] <= 'z')
// 						c = argv[j][i] -32;
// 					else if ((argv[j][i - 1] == ' ' || argv[j][i - 1] == '\t') && argv[j][i] >= 'a' && argv[j][i] <= 'z')
// 						c = argv[j][i] - 32;
// 					else if ((argv[j][i - 1] != ' ' && argv[j][i - 1] != '\t') && argv[j][i] >= 'A' && argv[j][i] <= 'Z')
// 						c = argv[j][i] + 32;
// 					else
// 						c = argv[j][i];
// 					write(1, &c, 1);
// 					i++;
// 				}
// 			}
// 			write(1, "\n", 1);
// 			j++;
// 		}
// 	}
// 	if (argc == 1)
// 		write(1, "\n", 1);
// }

// int main(int argc, char *argv[])
// {
// 	int i;
// 	int j;
// 	char c;

// 	i = 0;
// 	j = 1;
// 	if (argc > 1)
// 	{
// 		while (j < argc)
// 		{
// 			i = 0;
// 			while (argv[j][i] != '\0')
// 			{
// 				while (argv[j][i] == ' ' || argv[j][i] == '\t')
// 				{
// 					write(1, &argv[j][i], 1);
// 					i++;
// 				}
// 				while (argv[j][i] != '\0' && argv[j][i] != ' ' && argv[j][i] != '\t')
// 				{
// 					if (i == 0 && argv[j][i] >= 'a' && argv[j][i] <= 'z')
// 						c = argv[j][i] - 32;
// 					else if ((argv[j][i - 1] == ' ' || argv[j][i - 1] == '\t') && argv[j][i] >= 'a' && argv[j][i] <= 'z')
// 						c = argv[j][i] - 32;
// 					else if ((argv[j][i - 1] != ' ' && argv[j][i - 1] != '\t') && argv[j][i] >= 'A' && argv[j][i] <= 'Z')
// 						c = argv[j][i] + 32;
// 					else
// 						c = argv[j][i];
// 					write(1, &c, 1);
// 					i++;
// 				}
// 			}
// 			write(1, "\n", 1);
// 			j++;
// 		}
// 	}
// 	if (argc == 1)
// 		write(1, "\n", 1);
// }


// int main(int argc, char *argv[])
// {
// 	int i;
// 	int j;
// 	char c;

// 	j = 0;
// 	i = 0;
// 	if (argc > 1)
// 	{
// 		while (j < argc)
// 		{
// 			i = 0;
// 			while (argv[j][i] != '\0')
// 			{
// 				while (argv[j][i] == ' ' || argv[j][i] == '\t')
// 				{
// 					// write(1, "passed\n", 7);
// 					write(1, &argv[j][i], 1);
// 					i++;
// 				}
// 				while (argv[j][i] != '\0' && argv[j][i] != ' ' && argv[j][i] != '\t')
// 				{
// 					if (i == 0 && argv[j][i] >= 'a' && argv[j][i] <= 'z')
// 						c = argv[j][i] - 32;
// 					else if ((argv[j][i - 1] == ' ' || argv[j][i - 1] == '\t') && argv[j][i] >= 'a' && argv[j][i] <= 'z')
// 						c = argv[j][i] - 32;
// 					else if ((argv[j][i - 1] != ' ' && argv[j][i - 1] != '\t') && argv[j][i] >= 'A' && argv[j][i] <= 'Z')
// 						c = argv[j][i] + 32;
// 					else
// 						c = argv[j][i];
// 					write(1, &c, 1);
// 					i++;
// 				}
// 			}
// 			write(1, "\n", 1);
// 			j++;
// 		}
// 	}
// 	if (argc == 1)
// 		write(1, "\n", 1);
// }


// int main(int argc, char *argv[])
// {
// 	int i;
// 	int j;
// 	char c;

// 	i = 0;
// 	j = 0;
// 	if (argc > 1)
// 	{
// 		while (j < argc)
// 		{
// 			i = 0;
// 			while (argv[j][i])
// 			{
// 				while (argv[j][i] == ' ' || argv[j][i] == '\t')
// 				{
// 					write(1, &argv[j][i], 1);
// 					i++;
// 				}
// 				if (i == 0 && argv[j][i] >= 'a' && argv[j][i] <= 'z')
// 					c = argv[j][i] - 32;
// 				else if ((argv[j][i - 1] == ' ' || argv[j][i - 1] == '\t') && argv[j][i] >= 'a' && argv[j][i] <= 'z')
// 					c = argv[j][i] - 32;
// 				else if ((argv[j][i - 1] != ' ' && argv[j][i - 1] != '\t') && argv[j][i] >= 'A' && argv[j][i] <= 'Z')
// 					c = argv[j][i] + 32;
// 				else
// 					c = argv[j][i];
// 				write(1, &c, 1);
// 				i++;
// 			}
// 			write(1, "\n", 1);
// 			j++;
// 		}
// 	}
// 	if (argc == 1)
// 		write(1, "\n", 1);
// }
#include <unistd.h>
// int main(int argc, char *argv[])
// {
// 	int i;
// 	int j;
// 	int k;
// 	int r;

// 	i = 0;
// 	j = 0;
// 	k = 0;
// 	r = 0;
// 	if (argc == 3)
// 	{
// 		while (argv[1][i])
// 		{
// 			while (k < i)
// 			{
// 				if (argv[1][k] == argv[1][i])
// 				k++;
// 			}
// 			k = 0;
// 			while (argv[2][j] && r == 0)
// 			{
// 				if (argv[1][i] == argv[2][j])
// 				{
// 					write(1, &argv[1][i], 1);
// 					break ;
// 				}
// 				j++;
// 			}
// 			r = 0;
// 			i++;
// 		}
// 	}
// 	write(1, "\n", 1);
// }

int main(int ac, char **av)
{

	if(ac ==3 )
	{
		int i = 0;
		int j = 0;
		unsigned char seen [256] = {0};
		
		while(av[1][i])
		{
			j = 0;
			while (av[2][j])
			{
				if (av[2][j])
				{
					if (!seen[av[2][j]]) 
						write(1, &av[2][j], 1);
				}
				seen[av[2][j]] = 1;	// seen[j] = 1; seen[f] =1;
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
}
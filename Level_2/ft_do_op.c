// #include <stdlib.h>
// #include <stdio.h>
// #include <unistd.h>

// int main(int argc, char *argv[])
// {
// 	int i;
// 	int k;
// 	int res;
	
// 	res = 0;
// 	k = 0;
// 	i = 0;
// 	if (argc == 4)
// 	{
// 		i = atoi(argv[1]);
// 		k = atoi(argv[3]);
// 		if (argv[2][0] == '*')
// 			res = i * k;
// 		if (argv[2][0] == '/')
// 			res = i / k;
// 		if (argv[2][0] == '-')
// 			res = i - k;
// 		if (argv[2][0] == '+')
// 			res = i + k;
// 		if (argv[2][0] == '%')
// 			res = i % k;
// 		printf("%d", res);
// 	}
// 	printf("\n");
// }



// #include <stdio.h>
// #include <stdlib.h>

// int main(int argc, char *argv[])
// {
// 	int first;
// 	int second;
// 	int res;

// 	if (argc == 4)
// 	{
// 		first = atoi(argv[1]);
// 		second = atoi(argv[3]);

// 		if (argv[2][0] == '+')
// 			res = first + second;
// 		if (argv[2][0] == '-')
// 			res = first - second;
// 		if (argv[2][0] == '*')
// 			res = first * second;
// 		if (argv[2][0] == '/')
// 			res = first / second;
// 		if (argv[2][0] == '&')
// 			res = first & second;
// 		printf("%d", res);
// 	}
// 	printf("\n");
// }

// #include <stdio.h>
// #include <stdlib.h>
// int main(int argc, char *argv[])
// {
// 	int first;
// 	int second;
// 	int res;

// 	if (argc == 4)
// 	{
// 		first = atoi(argv[1]);
// 		second = atoi(argv[3]);

// 		if (argv[2][0] == '+')
// 			res = first + second;
// 		if (argv[2][0] == '-')
// 			res = first - second;
// 		if (argv[2][0] == '*')
// 			res = first * second;
// 		if (argv[2][0] == '/')
// 			res = first / second;
// 		if (argv[2][0] == '%')
// 			res = first % second;
// 		printf("%d", res);
// 	}
// 	printf("\n");
// }

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int first;
	int second;
	int res;

	if (argc == 4)
	{
		first = atoi(argv[1]);
		second = atoi(argv[3]);
		if (argv[2][0] == '*')
			res = first * second;
		printf("%d", res);
	}
	printf("\n");
}
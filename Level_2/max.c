// int		max(int* tab, unsigned int len)
// {
// 	int i;
// 	int res;
// 	i = 1;
// 	res = tab[0];
// 	if (!tab)
// 		return (0);
// 	while (tab[i] <= len)
// 	{
// 		if (tab[i] > res)
// 			res = tab[i];
// 		i++;
// 	}
// 	return (res);
// }

// #include <stdio.h>

// int main()
// {
// 	int tab[5] = {1, 6, 9, 4, 5};
// 	int len = 5;

// 	printf("%i\n", max(tab, len));
// 	return (0);
// }




// int		max(int* tab, unsigned int len)
// {
// 	int i;
// 	int res;

// 	if (!tab)
// 		return (0);
// 	res = tab[0];// 1
// 	i = 0;
// 	while (i < len)
// 	{
// 		if (tab[i] > res)
// 			res = tab[i];
// 		i++;
// 	}
// 	return (res);
// }

// #include <stdio.h>

// int main()
// {
// 	int *tab = {1, 2, 3, 4, 5};

// 	printf("%d\n", max(tab, 5));
// 	return (0);
// }

// #include <stdio.h>

// int main()
// {
// 	int tab[5] = {1, 6, 9, 4, 5};
// 	int len = 5;

// 	printf("%i\n", max(tab, len));
// 	return (0);
// }

// int		max(int* tab, unsigned int len)
// {
// 	int i;
// 	int j;
// 	int	min = INT_MIN;
// 	int max;

// 	if (!tab)
// 		return (0);
// 	i = 0;
// 	while (i <= len)
// 	{
// 		if (tab[i] > INT_MIN)
// 		{
// 			tab[i] = max; //now tab[i] is max
// 		}
// 		i++;
// 	}
// 	return (tab[i]);
// }

// #include <stdio.h>

// int main()
// {
// 	int tab[5] = {1, 2, 3, 4, 5};

// 	printf("%d\n", max(tab, 5));
// 	return (0);
// }



int		max(int* tab, unsigned int len)
{
	int i;
	int res;

	if (!tab)
		return (0);
	i = 0;
	res = tab[0];
	while (i < len)
	{
		if (res < tab[i])
			res = tab[i];
		i++;
	}
	return (res);
}


#include <stdio.h>

int main()
{
	int tab[5] = {10, 6, 9, 4, 11};
	int len = 5;

	printf("%i\n", max(tab, len));
	return (0);
}


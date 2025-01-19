// #include <unistd.h>

// char *revprint(char *str)
// {
// 	int c;

// 	c = 0;
// 	while (str[c] != '\0')
// 		c++;
// 	c--;
// 	while (c >= 0)
// 	{
// 		write(1, &str[c], 1);
// 		c--;
// 	}
// 	write(1, "\n", 1);
// 	return (str);
// }


// #include <stdio.h>
// int main()
// {
// 	char *str = "Nutto";

// 	revprint(str);
// 	return (0);
// }



#include <unistd.h>

char *rev_print(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	i--;
	while (i >= 0)
	{
		write(1, &str[i], 1);
		i--;
	}
	write(1, "\n", 1);
	return (str);
}


#include <stdio.h>
int main()
{
	char *str = "Nutto";

	rev_print(str);
	return (0);
}
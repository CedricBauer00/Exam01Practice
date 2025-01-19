#include <unistd.h>
#include <stdio.h>

char *rev_print(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	while (--i >= 0)
		write(1, &str[i], 1);
	write(1, "\n", 1);
	return (str);
}

// int main ()
// {
// 	char *c = "Hello Owrld";
// 	printf("%s\n", rev_print(c));
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

int main ()
{
	char *c = "Hello Owrld";
	rev_print(c);
	return (0);
}


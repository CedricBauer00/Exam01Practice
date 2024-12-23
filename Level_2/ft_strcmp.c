#include <stdio.h>

int    ft_strcmp(char *s1, char *s2)
{
	int i;
	int res;
	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] - s2[i] == 0)
			i++;
		else
			break ;
	}
	res = s1[i] - s2[i];
	return (res);
}

int main()
{
	char *s1 = "AAA";
	char *s2 = "AAB";
	int res;

	res = ft_strcmp(s1, s2);
	printf("%d\n", res);
	return (0);
}
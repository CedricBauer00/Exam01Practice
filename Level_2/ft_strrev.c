char    *ft_strrev(char *str)
{
	int i;
	int j;
	int k;
	int temp;

	i = 0;
	j = 0;
	k = 0;
	temp = 0;
	while (str[i])
		i++;
	j = i / 2;
	i--;
	while (k < j)
	{
		temp = str[k];
		str[k] = str[i];
		str[i] = temp;
		i--;
		k++;
	}
	return (str);
}
#include <stdio.h>
#include <stdlib.h>
int main()
{
	char *str = "abdce";
	char *s1;

	s1 = (char *)malloc(6 * sizeof(char));
	for (int i = 0; i < 5; i++)
		s1[i] = str[i];
	s1[5] = '\0';
	printf("%s\n", ft_strrev(s1));
	return (0);
}

#include <stdlib.h>

char    *ft_strdup(char *src)
{
	int i;
	int j;
	char *str;

	i = 0;
	while (src[i])
		i++;
	str = (char *)malloc((i + 1) * sizeof(char));
	if (!str)
		return (NULL);
	j = 0;
	while (j < i)
	{
		str[j] = src[j];
		j++;
	}
	str[j] = '\0';
	return (str);
}

#include <stdio.h>
int main()
{
	char *src = "Hello";
	printf("%s\n", ft_strdup(src));
	return (0);
}
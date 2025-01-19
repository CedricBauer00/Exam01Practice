#include <unistd.h>

size_t	ft_strspn1(const char *s, const char *accept)
{
	size_t i;
	size_t j;
	size_t ocur;

	ocur = 0;
	j = 0;
	i = 0;
	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
				ocur++;
			j++;
		}
		i++;
	}
	return (ocur);
}





#include <unistd.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t i;
	size_t ocur;

	ocur = 0;
	i = 0;
	while (s[i])
	{
		while (accept[i] && *s != accept[i])
			i++;
		if (accept[i] != '\0')
			return (ocur);
		i = 0;
		ocur++;
		s++;
	}
	return (ocur);
}

#include <stdio.h>
#include <string.h>

int main()
{
	int i;
	int j;
	int k;
	char str1[] = "abc123xyz";
    char str2[] = "xyz";

	k = ft_strspn1(str1, str2);
	j = strspn(str1, str2);
	i = ft_strspn(str1, str2);
	printf("original strspn =  %d\n", j);
	printf("my strspn = %d\n", k);
	printf("github str%d\n", i);
	return (0);
}
#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(const char *ptr)
{
	int i;
	int k;
	char *str;

	k = 0;
	i = 0;
	while (ptr[i])
		i++;
	str = (char *)malloc((i + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (k <= i)
	{
		str[k] = ptr[k];
		k++;
	}
	str[k] = '\0';
	return (str);
}


// int main()
// {
// 	char *str = "-2147483648";
// 	printf("str = %s\n", ft_strdup(str));
// 	return (0);
// }

char	*ft_itoa(int nbr)
{
	char *str;
	int i;
	int k;
	char c;

	i = 0;
	if (nbr == 0)
	{
		str = (char *)malloc(2 * sizeof(char));
		if (!str)
			return (NULL);
		str = ft_strdup("0");
		return (str);
		// printf("str = %s\n", str);
	}
	if (nbr == -2147483648)
	{
		str = (char *)malloc(11 * sizeof(char));
		if (!str)
			return (NULL);
		str = ft_strdup("-2147483648");
		return (str);
		// printf("str = %s\n", str);
	}
	if (nbr < 0)
		i++;
	k = nbr;
	while (k != 0)
	{
		k = k/ 10;
		i++;
	}
	str = (char *)malloc((i + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = -nbr;
	}
	printf("%d\n", i);
	str[i] = '\0';
	i--;
	while (nbr > 0)
	{
		str[i] = (nbr % 10) + '0';
		i--;
		nbr = nbr / 10;
	}
	return (str);
}

int main()
{
	char *str;

	str = ft_itoa(123345);
	printf("str = %s\n", str);
	return (0);
}
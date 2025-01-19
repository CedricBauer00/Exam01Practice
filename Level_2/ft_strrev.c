// char    *ft_strrev(char *str)
// {
// 	int i;
// 	int j;
// 	int k;
// 	int temp;

// 	i = 0;
// 	j = 0;
// 	k = 0;
// 	temp = 0;
// 	while (str[i])
// 		i++;
// 	j = i / 2;
// 	i--;
// 	while (k < j)
// 	{
// 		temp = str[k];
// 		str[k] = str[i];
// 		str[i] = temp;
// 		i--;
// 		k++;
// 	}
// 	return (str);
// }
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
// 	char *str = "abdce";
// 	char *s1;

// 	s1 = (char *)malloc(6 * sizeof(char));
// 	for (int i = 0; i < 5; i++)
// 		s1[i] = str[i];
// 	s1[5] = '\0';
// 	printf("%s\n", ft_strrev(s1));
// 	return (0);
// }




// char    *ft_strrev(char *str)
// {
// 	int i;
// 	int j;
// 	int k;
// 	int h;

// 	i = 0;
// 	j = 0;
// 	k = 0;
// 	h = 0;
// 	while (str[i])
// 		i++;
// 	i--;
// 	k = i / 2;
// 	while (j < k)
// 	{
// 		h = str[j];
// 		str[j] = str[i];
// 		str[i] = h;
// 		i--;
// 		j++;
// 	}
// 	return (str);
// }

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
// 	char *str = "abdce";
// 	char *s1;

// 	s1 = (char *)malloc(6 * sizeof(char));
// 	for (int i = 0; i < 5; i++)
// 		s1[i] = str[i];
// 	s1[5] = '\0';
// 	printf("%s\n", ft_strrev(s1));
// 	return (0);
// }





// char    *ft_strrev(char *str)
// {
// 	int i;
// 	int j;
// 	int k;
// 	int c;

// 	i = 0;
// 	j = 0;
// 	k = 0;
// 	c = 0;
// 	while (str[i])
// 		i++;
// 	i--;
// 	k = i / 2;
// 	while (j < k)
// 	{
// 		c = str[i];
// 		str[i] = str[j];
// 		str[j] = c;
// 		i--;
// 		j++;
// 	}
// 	return (str);
// }

// #include <stdlib.h>
// #include <stdio.h>

// int main()
// {
// 	char *str = "abcde";
// 	char *s1;

// 	s1 = (char *)malloc(6 *sizeof(char));
// 	for (int i = 0; i < 5; i++)
// 		s1[i] = str[i];
// 	s1[5] = '\0';
// 	printf("%s\n", ft_strrev(s1));
// 	return (0);
// }

char    *ft_strrev(char *str)
{
	int i;
	int j;
	int k;
	int c;

	i = 0;
	j = 0;
	k = 0;
	c = 0;
	while (str[i])
		i++;
	i--;
	k = i / 2;
	while (j < k)
	{
		c = str[i];
		str[i] = str[j];
		str[j] = c;
		i--;
		j++;
	}
	return (str);
}

#include <stdlib.h>
#include <stdio.h>

int main()
{
	char *str = "abcde";
	char *s1;

	s1 = (char *)malloc(6 * sizeof(char));
	for(int i = 0; i < 5; i++)
		s1[i] = str[i];
	s1[5] ='\0';
	printf("%s\n", ft_strrev(s1));
	return (0);
}

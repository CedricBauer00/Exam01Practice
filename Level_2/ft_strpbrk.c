// char	*ft_strpbrk(const char *s1, const char *s2)
// {
// 	int i;
// 	int j;

// 	j = 0;
// 	i = 0;
// 	if (!s1 || !s2)
// 		return (0);
// 	while (s1[i])
// 	{
// 		j = 0;
// 		while (s2[j])
// 		{
// 			if (s1[i] == s2[j])
// 				return ((char *)(&s1[i]));
// 			j++;
// 		}
// 		i++;
// 	}
// 	return (0);
// }

// #include <stdio.h>
// #include <string.h>

// int main()
// {
// 	char *str = "Hello";
// 	char *str2 = "o";

// 	printf("%s\n", ft_strpbrk(str, str2));
// 	printf("%s\n", strpbrk(str, str2));
// 	return (0);
// }


// char *ft_strpbrk(const char *s1, const char *s2)
// {
//     int i;
//     int j;

//     j = 0;
//     i = 0;
//     while (s1[i])
//     {
//         while (s2[j])
//         {
//             if (s1[i] == s2[j])
//                 return (char *)(s1 + i);  // Rückgabe des Zeigers auf das Zeichen in s1
//             j++;
//         }
//         i++;
//     }
//     return (0);
// }

// #include <stdio.h>

// int main ()
// {
//     char *i;
//     char *s1 = "Hello";
//     char *s2 = "l";

//     i = ft_strpbrk(s1, s2);
//     printf("%s\n", i);  // Gibt den String ab dem ersten 'l' aus: "llo"
//     return (0);
// }


// #include <stdio.h>
// #include <string.h>

// char *ft_strpbrk(const char *s1, const char *s2)
// {
// 	int i = 0;
	
// 	if (!s1 || !s2)
// 		return (0);
// 	while(*s1)
// 	{
// 		i = 0;
// 		while(s2[i])
// 		{
// 			if(*s1 == s2[i])
// 				return (char *) s1;
// 			i++;
// 		}
// 		s1++;	
// 	}
// 	return (NULL);
// }

// int main()
// {
// 	char *c;
// 	char *s1 = "Hello";
// 	char *s2 = "l";

// 	c = ft_strpbrk(s1, s2);
// 	printf("%s\n", c);
// 	return (0);
// }


char	*ft_strpbrk(const char *s1, const char *s2)
{
	int i;
	int j;

	j = 0;
	i = 0;
	if (!s1 || !s2)
		return (0);
	while (s1[i])
	{
		j = 0;
		while (s2[j])
		{
			if (s1[i] == s2[j])
				return ((char *)(&s1[i]));
			j++;
		}
		i++;
	}
	return (0);
}

#include <stdio.h>
int main()
{
	char *s1 = "hello";
	char *s2 = "l";

	printf("%s\n", ft_strpbrk(s1, s2));
	return (0);
}
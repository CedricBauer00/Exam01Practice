// #include <stdio.h>




// int	ft_atoi(const char *str)
// {
// 	int i;
// 	int negative;
// 	int res;
// 	char c;

// 	i = 0;
// 	res = 0;
// 	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\v' || str[i] == '\n' || str[i] == '\r' || str[i] == '\f')
// 		i++;
// 	if (str[i] == '+')
// 		i++;
// 	else if (str[i] == '-')
// 	{
// 		negative++;
// 		i++;
// 	}
// 	while (str[i] >= '0' && str[i] <= '9')
// 	{
// 		res = (res * 10) + (str[i] - '0');
// 		i++;
// 	}
// 	// printf("res = %d i = %d\n", res, i);
// 	if (negative > 0 && res > 0)
// 		res = -res;
// 	return (res);
// }


// int main()
// {
// 	char *str = "      				  123fffff";
// 	printf("%d\n", ft_atoi(str));
// 	return (0);
// }



// #include <stdio.h>

// int	ft_atoi(const char *str)
// {
// 	int i;
// 	int vorzeichen;
// 	int res;

// 	i = 0;
// 	while (str[i] != '\0' && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f' || str[i] == '\r'))
// 		i++;
// 	// printf("%c\n", str[i]);
// 	if (str[i] == '-')
// 	{
// 		vorzeichen++;
// 		i++;
// 	}
// 	else if (str[i] == '+')
// 		i++;
// 	res = 0;
// 	while (str[i] >= '0' && str[i] <= '9')
// 	{
// 		res = (res * 10) + (str[i] - '0');
// 		i++;
// 	}
// 	if (vorzeichen > 0)
// 		res = -res;
// 	return (res);
// }

// #include <stdlib.h>
// int main()
// {
// 	const char *str = "   			  -+10w";
// 	printf("my atoi = %d\n", ft_atoi(str));
// 	printf("std atoi = %d\n", atoi(str));
// 	return (0);
// }


// #include <unistd.h>


// int	ft_atoi(const char *str)
// {
// 	int i;
// 	int minus;
// 	int res;

// 	if (!str)
// 		return (0)
// 	while (str[i] != '\0' && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f' || str[i] == '\r'))
// 		i++;
// 	if (str[i] == '-')
// 	{
// 		minus++;
// 		i++;
// 	}
// 	else if (str[i] == '+')
// 		i++;
// 	res = 0;
// 	while (str[i] >= '0' && str[i] <= '9')
// 	{
// 		res = (res * 10) + str[i] - '0';
// 		i++;
// 	}
// 	if (minus < 0)
// 	{
// 		res = -res;
// 	}
// 	return (res);
// }

#include <stdio.h>

int	ft_atoi(const char *str)
{
	int i;
	int res;
	int j;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0' && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f' || str[i] == '\r'))
		i++;
	if (str[i] == '-')
	{
		j = 1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	res = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		// printf("%c\n", str[i]);
		res = (res * 10) + (str[i] - '0');
		// printf("%d\n", res);
		i++;
	}
	if (j == 1)
		res = -res;
	return (res);
}

#include <stdlib.h>
int main()
{
	int i;
	int j;

	j = atoi("asdfasdf123123");
	i = ft_atoi("asdfasdf123123");
	printf("my atoi = %d\n", i);
	printf("std atoi = %d\n", j);

	return (0);
}
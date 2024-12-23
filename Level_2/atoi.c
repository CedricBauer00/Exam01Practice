#include <stdio.h>




int	ft_atoi(const char *str)
{
	int i;
	int negative;
	int res;
	char c;

	i = 0;
	res = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\v' || str[i] == '\n' || str[i] == '\r' || str[i] == '\f')
		i++;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		negative++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	printf("res = %d i = %d\n", res, i);
	if (negative > 0 && res > 0)
		res = -res;
	return (res);
}


int main()
{
	char *str = "      				  123fffff";
	printf("%d\n", ft_atoi(str));
	return (0);
}
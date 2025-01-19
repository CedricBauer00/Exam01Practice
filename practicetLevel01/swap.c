#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
#include <stdio.h>
int main()
{
	int a = 1;
	int b = 2;
	printf("before %d, %d\n", a, b);
	ft_swap(&a, &b);
	printf("after %d, %d\n", a, b);
	return (0);
}
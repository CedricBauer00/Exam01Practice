#include <unistd.h>

void revprint_bits(unsigned char octet)
{
	int i = 8;
	unsigned char bit;

	while (i--)
	{
		bit = (octet >> i & 1) + '0';
		write(1, &bit, 1);
	}
	i = 0;
	write(1, "\n\nnow rev:\n\n", 12);
	while (i < 8)
	{
		bit = (octet >> i & 1) + '0';
		write(1, &bit, 1);
		i++;
	}
}

int main(void)
{
	revprint_bits(1);
	return (0);
}
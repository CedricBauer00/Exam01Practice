// #include <unistd.h>

// void	print_bits(unsigned char octet)
// {
// 	int i;

// 	i = octet;
// 	if (i >= 128)
// 	{
// 		i = i - 128;
// 		write(1, "1", 1);
// 	}
// 	else
// 		write(1, "0", 1);
// 	if (i >= 64)
// 	{
// 		i = i - 64;
// 		write(1, "1", 1);
// 	}
// 	else
// 		write(1, "0", 1);
// 	if (i >= 32)
// 	{
// 		i = i - 32;
// 		write(1, "1", 1);
// 	}
// 	else
// 		write(1, "0", 1);
// 	if (i >= 16)
// 	{
// 		i = i - 16;
// 		write(1, "1", 1);
// 	}
// 	else
// 		write(1, "0", 1);
// 	if (i >= 8)
// 	{
// 		i = i - 8;
// 		write(1, "1", 1);
// 	}
// 	else
// 		write(1, "0", 1);
// 	if (i >= 4)
// 	{
// 		i = i - 4;
// 		write(1, "1", 1);
// 	}
// 	else
// 		write(1, "0", 1);
// 	if (i >= 2)
// 	{
// 		i = i - 2;
// 		write(1, "1", 1);
// 	}
// 	else
// 		write(1, "0", 1);
// 	if (i == 1)
// 	{
// 		i = i - 1;
// 		write(1, "1", 1);
// 	}
// 	else
// 		write(1, "0", 1);
// }

// #include <stdio.h>

// int main()
// {
// 	print_bits(63);
// 	return(0);
// }


// #include <unistd.h>

// void print_bits(unsigned char octet)
// {
// 	int i;
// 	unsigned char bit;

// 	i = 8;
// 	while (i--)
// 	{
// 		bit = (octet >> i & 1) + '0';
// 		write(1, &bit, 1);
// 	}
// }


// void	print_bits(unsigned char octet)
// {
// 	int i = 8;

// 	unsigned char	bit;

// 	while (i--)
// 	{
// 		bit (octet >> i & 1) = '0';
// 		write(1, &bit, 1);
// 	}
// }

// void	print_bits(unsigned char octet)
// {
// 	int i = 8;

// 	unsigned char	bit;

// 	while (i--)
// 	{
// 		bit = (octet >> i & 1) + '0';
// 		write(1, &bit, 1);
// 	}
// }

// void	print_bits(unsigned char octet)
// {
// 	int = 8;
// 	unsigned char bit;

// 	while (i--)
// 	{
// 		bit = (octet >> i & 1);
// 		write(1, &bit, 1);
// 	}
// }


// void	print_bits(unsigned char octet)
// {
// 	int i = 8;
// 	unsigned char bit;

// 	while (i--)
// 	{
// 		bit = (octet >> i & 1) + '0';
// 		write(1, &bit, 1);
// 	}
// }

// {
// 	return ((octet >> 4) || (octet << 4));
	
// }


// void	print_bits(unsigned char octet)
// {
// 	int i = 8;
// 	unsgned char bit;

// 	while (i--)
// 	{
// 		bit = (octet >> i & 1) + '0';
// 		write(1, &bit, 1);
// 	}
// }

// reversbits
// {
// 	return ((octet >> 4) || (octet << 4));
// }

// #include <unistd.h>

// void	print_bits(unsigned char octet)
// {
// 	int i = 8;
// 	unsigned char bit;

// 	while (i--)
// 	{
// 		bit = (octet >> i & 1) + '0';
// 		write(1, &bit, 1);
// 	}
// }



// #include <unistd.h>

// void	print_bits(unsigned char octet)
// {
// 	int i = 8;
// 	unsigned char bit;

// 	while (i--)
// 	{
// 		bit = (octet >> i & 1) + '0';
// 		write(1, &bit, 1);
// 	}
// }


// #include <unistd.h>

// void	print_bits(unsigned char octet)
// {
// 	int i = 0;
// 	unsigned char bit

// 	while (i--)
// 	{
// 		bit = (octet >> i & 1) = '0';
// 		write(1, &bit, 1);
// 	}
// }

// #include <unistd.h>

// void	print_bits(unsigned char octet)
// {
// 	int i = 8;
// 	unsigned char bit;

// 	while (i--)
// 	{
// 		bit = (octet >> i & 1) + '0';
// 		write(1, &bit, 1);
// 	}
// }
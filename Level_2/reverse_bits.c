// #include <unistd.h>

// void	print_bits(unsigned char octet)
// {
// 	int i;
// 	int j;

// 	j = 0;
// 	while (j < 8)
// 	{
// 		i = octet;
// 		if (i >= 128)
// 		{
// 			i = i - 128;
// 			if (j == 7)
// 				write(1, "1", 1);
// 		}
// 		else
// 		{
// 			if (j == 7)
// 				write(1, "0", 1);
// 		}
// 		if (i >= 64)
// 		{
// 			i = i - 64;
// 			if (j == 6)
// 				write(1, "1", 1);
// 		}
// 		else
// 		{
// 			if (j == 6)
// 				write(1, "0", 1);
// 		}
// 		if (i >= 32)
// 		{
// 			i = i - 32;
// 			if (j == 5)
// 				write(1, "1", 1);
// 		}
// 		else
// 		{
// 			if (j == 5)
// 				write(1, "0", 1);
// 		}
// 		if (i >= 16)
// 		{
// 			i = i - 16;
// 			if (j == 4)
// 				write(1, "1", 1);
// 		}
// 		else
// 		{
// 			if (j == 4)
// 				write(1, "0", 1);
// 		}
// 		if (i >= 8)
// 		{
// 			i = i - 8;
// 			if (j == 3)
// 				write(1, "1", 1);
// 		}
// 		else
// 		{
// 			if (j == 3)
// 				write(1, "0", 1);
// 		}
// 		if (i >= 4)
// 		{
// 			i = i - 4;
// 			if (j == 2)
// 				write(1, "1", 1);
// 		}
// 		else
// 		{
// 			if (j == 2)
// 				write(1, "0", 1);
// 		}
// 		if (i >= 2)
// 		{
// 			i = i - 2;
// 			if (j == 1)
// 				write(1, "1", 1);
// 		}
// 		else
// 		{
// 			if (j == 1)
// 				write(1, "0", 1);
// 		}
// 		if (i >= 1)
// 		{
// 			if (j == 0)
// 				write(1, "1", 1);
// 		}
// 		else
// 		{
// 			if (j == 0)
// 				write(1, "0", 1);
// 		}
// 		j++;
// 	}
// }

// #include <stdio.h>

// int main()
// {
// 	print_bits(32);
// 	return(0);
// }


// #include <unistd.h>

// unsigned char	reverse_bits(unsigned char octet)

// {
// 	int i;
// 	uinsigned char res = 0;

// 	i = 8;
// 	while (i > 0)
// 	{
// 		res = res * 2 +( octet % 2);
// 		octet = octet / 2;
// 		i--;
// 	}
// 	return (res);
// }


// unsigned char	reverse_bits(unsigned char octet)
// {
// 	int i = 8;
// 	unsigned char res = 0;

// 	while (i > 0)
// 	{
// 		res = res * 2 + (octet % 2);
// 		octet = octet /2;
// 		i--;
// 	}
// 	return (res);
// }

// unsigned char	reverse_bits(unsigned char octet)
// {
// 	int i = 8;
// 	unsigned char res = 0;

// 	while (i > 0)
// 	{
// 		res = res *2 + (octet % 2);
// 		octet = octet /2;
// 		i--;
// 	}
// 	return (res);
// }

// unsigned char	reverse_bits(unsigned char octet)
// {
// 	int i = 8;
// 	unsigned char res = 0;

// 	while (i > 0)
// 	{
// 		res = res * 2+ (octet %2 );
// 		octet = octet /2;
// 		i--;
// 	}
// 	return (res);
// }

// unsigned char	reverse_bits(unsigned char octet)
// {
// 	int i = 8;
// 	unsigned char res = 0;

// 	while (i > 0)
// 	{
// 		res = res *2 = (octet % 2);
// 		octet = octet /2;
// 		i--;
// 	}
// 	return (res);
// }


// unsigned char	reverse_bits(unsigned char octet)
// {
// 	int i = 8;
// 	unsigned char res = 8;

// 	while (i > 0)
// 	{
// 		res = res * 2 + (octet % 2);
// 		octet = octet / 2;
// 		i--;
// 	}
// 	return (res);
// }



// #include <unistd.h>

// unsigned char	reverse_bits(unsigned char octet)
// {
// 	int i = 8;
// 	unsigned char res = 0;

// 	while (i > 0)
// 	{
// 		res = res * 2 + (octet & 2);
// 		octet = octet / 2;
// 		i--:
// 	}
// 	return (res);
// }


// #include <unistd.h>

// unsigned char	reverse_bits(unsigned char octet)
// {
// 	int i  =8;
// 	unsigned char res = 0;

// 	while (i > 0)
// 	{
// 		res = res * 2 + (octet % 1)
// 		octet = octet / 2;
// 		i--;
// 	}
// 	return (res);
// }



// unsigned char	reverse_bits(unsigned char octet)
// {
// 	int i = 8;
// 	unsigned char res = 0;

// 	while (i > 0)
// 	{
// 		res = res * 2 + (octet % 2);
// 		octet = octet / 2;
// 		i--;
// 	}
// 	return (res);
// }
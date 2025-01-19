int	    is_power_of_2(unsigned int n)
{
	if (n > 2)
		is_power_of_2(n / 2);
	
	return (0);
}
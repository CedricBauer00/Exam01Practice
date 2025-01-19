void sort_int_tab(int *tab, unsigned int size)
{
	int i;
	int k;
	int j;
	int temp;

	i = 0;
	j = 0;
	if (!tab)
		return ;
	while (j < size)
	{
		i = j;
		k = j;
		temp = tab[k];
		while (k < size)
		{
			if (temp > tab[k])
			{
				temp = tab[k];
				i = k;
			}
			k++;
		}
		if (i != j)
		{
			tab[k] = tab[j];
			tab[j] = temp;
		}
		j++;
	}
}

int main()
{
	int i[];

	int[0] = 1;
	int[1] = 2;
	int[2] = 3;
	int[3] = 4;
	int[4] = 5;

	sort_int_tab(i, 5);
	for(int j = 0; j < 5; j++)
		printf("%d\n", i);
	return (0);
}
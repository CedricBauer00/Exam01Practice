#include <stdlib.h>
#include <stdio.h>


int     *ft_range(int start, int end)
{
	int *str;
	int i;

	i = start;
	str = (int *)malloc(i * sizeof(int));
	if (!str)
		return (0);
	while (i < end)
	{
		printf("momentan = %d\n", i);
		str[i] = i;
		i++;
	}
	return (str);
}

// int main()
// {
// 	int *i;
// 	int start;
// 	int end;

// 	start = 1;
// 	end = 5;
// 	// while (start < end)
// 	// 	i++;
// 	i = ft_range(start, end);
// 	int *range = ft_range(start, end);

// 	for (i = 0; i < end - start; i++) {
// 		printf("%d ", range[i]); // Gibt jedes Element im Array aus
// 	}
// 	printf("\n");

// 	return (0);
// }


int main()
{
    int start = 1;
    int end = 5;
    int *range;
    int i;

    range = ft_range(start, end);
    
    if (!range)
    {
        printf("Speicher konnte nicht allokiert werden!\n");
        return 1;
    }

    // Ausgabe des Arrays
    printf("Array: ");
    for (i = 0; i < end - start; i++)
    {
        printf("%d ", range[i]);
    }
    printf("\n");

    // Speicher freigeben
    free(range);
    
    return 0;
}∫
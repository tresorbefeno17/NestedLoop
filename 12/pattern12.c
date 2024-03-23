#include <stdio.h>

int	main(void)
{
	int i, j, k;

	i = 1;
	while(i <= 5)
	{
		k = i;
		j = 1;
		while(j <= 5)
		{
			printf("%2d ", k);
			k += 5;
			j++;
		}
		printf("\n");
		i++;
	}

	return (0);
}

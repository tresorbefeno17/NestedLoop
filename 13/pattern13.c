#include <stdio.h>

int	main(void)
{
	int i, j, k;

	i = 5;
	while(i >= 1)
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
		i--;
	}

	return (0);
}

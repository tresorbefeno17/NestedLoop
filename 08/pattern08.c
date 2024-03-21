#include <stdio.h>

int	main(void)
{
	int i, j, k;

	i = 1;
	k = 2;
	while(i <= 5)
	{
		j = 1;
		while(j <= 5)
		{
			printf("%2d ", k);
			k += 2;
			j++;
		}
		printf("\n");
		i++;
	}

	return (0);
}

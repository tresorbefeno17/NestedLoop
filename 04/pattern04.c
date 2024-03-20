#include <stdio.h>

int	main(void)
{
	int i;
	int j;

	i = 5;
	while( i >= 1)
	{
		j = 1;
		while(j <= 5)
		{
			printf("%d ", i);
			j++;
		}
		printf("\n");
		i--;
	}

	return (0);
}


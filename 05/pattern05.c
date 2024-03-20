#include <stdio.h>

int	main(void)
{
	int i, j;

	i = 1;
	while( i <= 5)
	{
		j = 5;
		while(j >= 1)
		{
			printf("% d", j);
			j--;
		}
		printf("\n");
		i++;
	}

	return (0);
}

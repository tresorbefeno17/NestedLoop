#include <stdio.h>

int	main(void)
{
	int i, j;

	i = 1;
	while(i <= 5)
	{
		j = 1;
		while(j <= 3)
		{
			printf("%d %d ", i, j);
			j++;
		}
		printf("\n");
		i++;
	}

	return (0);
}

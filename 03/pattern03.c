#include <stdio.h>

int	main(void)
{
	int i;
	int j;

	i = 1;
	while(i <= 5)
	{
		j = 1;
		while(j <= 5)
		{
			printf("%d ", j);
			j++;
		}
		printf("\n");
		i++;
	}

	return (0);
}


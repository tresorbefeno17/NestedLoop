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
			printf("%d %d ", j, i);
			j++;
		}
		printf("\n");
		i++;
	}
	
	return (0);
}

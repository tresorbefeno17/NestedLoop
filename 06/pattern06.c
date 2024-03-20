#include <stdio.h>

int	main(void)
{
	int i, j, k;

	i = 1; 
	k = 1;
	while(i <= 5)
	{
		j = 1;
		while(j <= 5)
		{
			printf("%2.d ", k);
			k++;
			j++;
		}
		printf("\n");
		i++;
	}

	return (0);
}

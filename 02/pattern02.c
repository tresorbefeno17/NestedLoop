#include <unistd.h>

void	display(void)
{
	int i;
	int j;

	i = 0;
	while (i < 5)
	{
		while (j < 5)
		{
			write(1, &(i + 1), 1);
			write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}


int	main(int argc, char *argv[])
{
	int n;

	n = 0;
	if (argc == 2)
	{	
		while (argv[1][n])
		{
			if (argv[1][n] == '-' || argv[1][n] == '+')
				n++;
			while (argv[1][n] >= '0' && argv[1][n] <= '9')
				n++;
		}
		display();
	}
	return 0;
}	


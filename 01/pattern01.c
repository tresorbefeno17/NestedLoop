#include <unistd.h>

void	loop(int n)
{
	int i;
	int j;

	i = 0;
	if (n > 0)
	{
		while (i < n)
		{
			j = 0;
			while (j < n)
			{
				write(1, "* ", 2);
				j++;
			}
			write(1, "\n", 1);
			i++;
		}
	}
}


int	atoi(char *str)
{
	int i;
	int nbr;
	int sign;

	i = 0;
	nbr = 0;
	sign = 1;
	if (str[0] == '-' || str[0] == '+')
	{
		if (str[0] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = (str[i] - '0') + nbr * 10;
		i++;
	}
	return sign*nbr;
}



int 	main(int argc, char *argv[])
{
	int n;

	if (argc == 2)
	{
		n = atoi(argv[1]);
		loop(n);
	}
	return 0;
}

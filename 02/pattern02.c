#include <unistd.h>
void	putnbr(int nbr);

void	display(void)
{
	int i;
	int j;

	i = 0;
	while (i < 5)
	{
		j = 0;
		while (j < 5)
		{
			putnbr(i + 1);
			write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

void	putnbr(int nbr)
{
	char c;

	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= -1;
	}	
	if (nbr < 10)
	{
		c = (char)nbr + '0';
		write(1, &c, 1);
	}
	else 
	{
		c = (char)nbr % 10 + '0';
		putnbr(nbr / 10);
		write(1, &c, 1);
	}
}
	
int	main(int argc, char *argv[])
{
	int n;

	n = 0;
	if (argc == 2)
	{	
		if (argv[1][n] == '-' || argv[1][n] == '+')
			n++;
		while (argv[1][n] >= '0' && argv[1][n] <= '9')
			n++;
		if (argv[1][n] == '\0')
			display();
	}
	return 0;
}

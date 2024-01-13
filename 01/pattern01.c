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
				write(1, "*", 1);
				j++;
			}
			write(1, "\n", 1);
			i++;
		}
	}
}

int 	main(int argc, char *argv[])
{


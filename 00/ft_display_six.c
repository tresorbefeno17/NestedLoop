#include <unistd.h>

void	ft_display_six(void)
{
	int i;
	int j;

	i = 1;
	while (i < 3)
	{
		j = 1;
		while (j < 4)
		{
			write(1, "six", 3);
			write(1, "\n", 1);
			j++;
		}
		i++;
	}
}

int main()
{
	ft_display_six();
	return 0;
}

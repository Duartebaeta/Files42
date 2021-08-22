#include <unistd.h>
int	main(int argc, char const *argv[])
{
	int	i;
	int	x;

	i = 1;
	while (i != argc)
	{
		x = 0;
		while (argv[i][x])
		{
			write(1, &argv[i][x], 1);
			x++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}

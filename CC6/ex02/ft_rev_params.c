#include <unistd.h>
int	main(int argc, char const *argv[])
{
	int	x;

	while (argc != 1)
	{
		x = 0;
		while (argv[argc - 1][x])
		{
			write(1, &argv[argc - 1][x], 1);
			x++;
		}
		write(1, "\n", 1);
		argc--;
	}
	return (0);
}

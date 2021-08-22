#include <unistd.h>
int	main(int argc, char *argv[])
{
	int	x;

	x = 0;
	if (argc > 0)
	{
		while (argv[0][x])
		{
			write(1, &argv[0][x], 1);
			x++;
		}
	}
	return (0);
}

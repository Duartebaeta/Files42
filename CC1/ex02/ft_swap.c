#include <unistd.h>
void	ft_swap(int *a, int *b)
{
	int		test;

	test = *b;
	*b = *a;
	*a = test;
}

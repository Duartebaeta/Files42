#include <unistd.h>
void	ft_swap(int *a, int *b)
{
	int		test;

	test = *b;
	*b = *a;
	*a = test;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int		i;
	int		x;

	i = 0;
	x = 0;
	while (i < size)
	{
		while (x < size)
		{
			if (tab[i] > tab[x])
			{
				ft_swap(&tab[i], &tab[x]);
			}
			x++;
		}
		i++;
		x = 0 + i;
	}
}

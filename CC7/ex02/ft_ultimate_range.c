#include <stdlib.h>
#include <stdio.h>
int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;
	int	i;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	len = max - min;
	*range = malloc(sizeof(int) * len);
	i = 0;
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (len);
}

// int main()
// {
// 	int	*range;
// 	printf("%d\n", ft_ultimate_range(&range, 5, 20));
// 	for (int i = 0; i < 15; i++)
// 	{
// 		printf("%d\n", range[i]);
// 	}
// 	return 0;
// }

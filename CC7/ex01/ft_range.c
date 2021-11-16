#include <stdio.h>
#include <stdlib.h>
int	*ft_range(int min, int max)
{
	int	len;
	int	*array;
	int	i;

	if (min >= max)
		return (0);
	len = max - min;
	array = (int *) malloc(sizeof(int) * len);
	i = 0;
	while (min <= max)
	{
		array[i] = min;
		i++;
		min++;
	}
	return (array);
}

// int main()
// {
// 	ft_range(3, 3);
// 	for (int i = 0; i < 15; i++)
// 	{
// 		printf("%d\n", ft_range(5, 20)[i]);
// 	}
// 	return 0;
// }

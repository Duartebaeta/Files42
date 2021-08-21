#include <stdio.h>
int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		counter++;
	}
	return (counter);
}

// int main()
// {
// 	printf("%d\n", ft_strlen("123456789"));
// 	return 0;
// }

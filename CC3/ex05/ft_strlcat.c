#include <stdio.h>
#include <string.h>
unsigned int	ft_strlen(char *string)
{
	unsigned int	counter;

	counter = 0;
	while (string[counter])
	{
		counter++;
	}
	return (counter);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	counter;
	int	i;
	int	total;

	counter = 0;
	while (dest[counter])
	{
		counter++;
	}
	total = size - counter - 1;
	i = 0;
	while (i <= total)
	{
		dest[counter] = src[i];
		dest[counter + 1] = '\0';
		i++;
		counter++;
	}
	return (ft_strlen(dest));
}

// int main()
// {
// 	char dest[20] = "";
// 	char src[] = "12345";

// 	char dest1[20] = "";
// 	char src1[] = "12345";

// 	unsigned int nb = sizeof(dest);
// 	printf("%u\n", ft_strlcat(dest, src, nb));

// 	printf("%lu\n", strlcat(dest1, src1, nb));
// 	return 0;
// }
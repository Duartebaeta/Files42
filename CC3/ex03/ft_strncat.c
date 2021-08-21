#include <stdio.h>
#include <string.h>
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	counter;

	i = 0;
	counter = 0;
	while (dest[counter] != '\0')
	{
		counter++;
	}
	while (src[i] && i < nb)
	{
		dest[counter] = src[i];
		i++;
		counter++;
	}
	dest[counter] = '\0';
	return (dest);
}

// int main()
// {
// 	char dest1[20] = "abcdef";
// 	char src1[] = "12345";

// 	char dest2[20] = "abcdef";
// 	char src2[] = "12345";

// 	unsigned int nb = 1;
// 	printf("%s\n", ft_strncat(dest1, src1, nb));
// 	printf("%s\n", strncat(dest2, src2, nb));
// 	return 0;
// }
#include <stdio.h>
#include <string.h>
char	*ft_strcat(char *dest, char *src)
{
	int	counter;
	int	i;

	counter = 0;
	while (dest[counter] != '\0')
	{
		counter++;
	}
	i = 0;
	while (src[i] != '\0')
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
// 	char dest2[30] = "abcdef";
// 	char src[] = "12345";
// 	printf("%s\n", ft_strcat(dest2, src));
// 	printf("%s\n", strcat(dest2, src));
// 	return 0;
// }

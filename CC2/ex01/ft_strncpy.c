#include <unistd.h>
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	counter;
	unsigned int	i;

	counter = 0;
	while (src[counter])
	{
		counter++;
	}
	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (n > counter)
	{
		dest[counter] = '\0';
		counter++;
	}
	return (dest);
}

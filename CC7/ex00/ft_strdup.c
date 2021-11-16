#include <stdlib.h>
char	*ft_strdup(char *src)
{
	int		len;
	char	*copy;
	int		i;

	len = 0;
	while (src[len])
	{
		len++;
	}
	copy = malloc(sizeof(char) * len + 1);
	if (!(copy))
		return (NULL);
	i = 0;
	while (src[i])
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

// int main()
// {
// 	printf("%s\n", ft_strdup("12345"));
// 	printf("%s", strdup("12345"));
// 	return 0;
// }

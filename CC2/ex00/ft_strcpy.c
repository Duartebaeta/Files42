#include <unistd.h>
#include <stdio.h>
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	printf("%s\n", dest);
	return (dest);
}

int main(int argc, char const *argv[])
{
	char dest[] = "abcdefg";
	char src[] = "1234";

	ft_strcpy(dest, src);
	return 0;
}

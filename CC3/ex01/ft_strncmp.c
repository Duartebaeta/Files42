#include <stdio.h>
#include <string.h>
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] == s2[i])
		{
			i++;
		}
		else if (s1[i] > s2[i])
		{
			return (1);
		}
		else
		{
			return (-1);
		}
		if (s1[i] == '\0' && s2[i] == '\0')
		{
			return (0);
		}
	}
	return (0);
}

// int main()
// {
// 	printf("%d\n", ft_strncmp("abcte", "abcdef", 2));
// 	printf("%d\n", strncmp("abcte", "abcdef", 2));
// 	return 0;
// }

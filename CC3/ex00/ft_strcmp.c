#include <stdio.h>
#include <string.h>
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
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
	}
	return (0);
}

// int main()
// {
// 	printf("%d\n", ft_strcmp("abcde", "abcdef"));
// 	printf("%d\n", strcmp("abcde", "abcdef"));
// 	return 0;
// }

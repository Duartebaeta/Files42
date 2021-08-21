#include <stdio.h>
#include <string.h>
char	ft_strlen(char *needle)
{
	int	len;

	len = 0;
	while (needle[len] != '\0')
	{
		len++;
	}
	return (len);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	counters[2];

	if (ft_strlen(to_find) == 0)
		return (str);
	counters[0] = 0;
	counters[1] = 0;
	while (str[counters[1]] != '\0')
	{
		if (str[counters[1]] == to_find[counters[0]])
		{
			counters[1]++;
			counters[0]++;
			if (to_find[counters[0]] == '\0')
				return (&str[counters[1] - counters[0]]);
		}
		else
		{
			counters[1]++;
			counters[0] = 0;
		}
	}
	return (NULL);
}

// int main()
// {
// 	char str [] = "ola o meu nome e duarte";
// 	char needle[] = "";
// 	printf("%s\n", ft_strstr(str, needle));
// 	printf("%s\n", strstr(str, needle));
// 	return 0;
// }

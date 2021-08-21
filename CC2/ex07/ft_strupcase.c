#include <unistd.h>
#include <stdio.h>
char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (97 <= str[i] && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

// int main()
// {
// 	char test[] = "aaaaa";
// 	printf("%s\n", ft_strupcase(test));
// 	return 0;
// }

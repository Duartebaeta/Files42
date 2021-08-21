#include <unistd.h>
int	ft_strlen(char *needle)
{
	int	len;

	len = 0;
	while (needle[len] != '\0')
	{
		len++;
	}
	return (len);
}

int	ft_str_is_uppercase(char *str)
{
	int	i;

	if (ft_strlen(str) == 0)
	{
		return (1);
	}
	i = 0;
	while (str[i])
	{
		if (65 <= str[i] && str[i] <= 90)
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

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

int	ft_str_is_alpha(char *str)
{
	int	i;

	if (ft_strlen(str) == 0)
	{
		return (1);
	}
	i = 0;
	while (str[i] != '\0')
	{
		if ((65 <= str[i] && str[i] <= 90) || (97 <= str[i] && str[i] <= 122))
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

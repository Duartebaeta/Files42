#include <unistd.h>
#include <stdio.h>
int	ft_check(char a)
{
	if ('A' <= a && a <= 'Z')
	{
		return (1);
	}
	else if ('a' <= a && a <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	ft_check2(char b)
{
	if (b < 'a' || b > 'z')
	{
		if (b < 'A' || b > 'Z')
		{
			if (b < '0' || b > '9')
			{
				return (1);
			}	
		}	
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_check(str[i]))
		{
			if ('A' <= str[i] && str[i] <= 'Z')
			{
				str[i] = str[i] + 32;
			}
			if (ft_check2(str[i - 1]))
			{
				str[i] = str[i] - 32;
			}
			i++;
		}
		else
		{
			i++;
		}
	}
	return (str);
}

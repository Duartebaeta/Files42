#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	swap_alpha(char nonP)
{
	char	first;
	char	second;

	if (nonP >= 10 && nonP <= 15)
	{
		first = '0';
		second = 'a' + (nonP - 10);
	}
	else
	{
		first = '1';
		second = 'a' + (nonP - 26);
	}
	ft_putchar('\\');
	ft_putchar(first);
	ft_putchar(second);
}

void	swap_num(char nonP)
{
	char	first;
	char	second;

	if (nonP <= 9)
	{
		first = '0';
		second = nonP;
	}
	else if (nonP >= 16 && nonP <= 25)
	{
		first = '1';
		second = '0' + (nonP - 16);
	}
	ft_putchar('\\');
	ft_putchar(first);
	ft_putchar(second);
}

int	ft_check(char chr)
{
	return (chr >= 32 && chr <= 127);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_check(str[i]))
		{
			ft_putchar(str[i]);
		}
		else
		{
			if ((str[i] >= 0 && str[i] <= 9) || (str[i] >= 16 && str[i] <= 25))
			{
				swap_num(str[i]);
			}
			else
			{
				swap_alpha(str[i]);
			}
		}
		i++;
	}
}

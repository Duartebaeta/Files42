#include <unistd.h>
unsigned int	ft_strlen(char *string)
{
	unsigned int	len;

	len = 0;
	while (string[len])
	{
		len++;
	}
	return (len);
}

int	ft_check(char *base)
{
	int	i;
	int	x;

	x = 0;
	i = 0;
	if (ft_strlen(base) < 2)
	{
		return (0);
	}
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		x = i + 1;
		while (base[x])
		{
			if (base[x] == base[i])
				return (0);
			x++;
		}
		i++;
	}
	return (1);
}

void	ft_print(unsigned int *array, char *base, int i)
{
	char	print;

	while (i >= 0)
	{
		print = base[array[i]];
		write(1, &print, 1);
		i--;
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int				i;
	unsigned int	num;
	unsigned int	len;
	unsigned int	array[32];

	if (ft_check(base))
	{
		if (nbr < 0)
		{
			write(1, "-", 1);
			num = nbr * -1;
		}
		else
			num = nbr;
		i = 0;
		len = ft_strlen(base);
		while (num != 0)
		{
			array[i] = num % len;
			num = num / len;
			i++;
		}
		ft_print(array, base, i - 1);
	}
}

// int main()
// {
// 	char base[] = "12";
// 	ft_putnbr_base(-2, base);
// 	return 0;
// }

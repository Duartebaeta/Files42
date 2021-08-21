int	ft_isbase(char a, char *base)
{
	int	x;

	x = 0;
	while (base[x])
	{
		if (a == base[x])
			return (x);
		x++;
	}
	return (-1);
}

int	ft_converter(char *str, char *base, int i)
{
	int	len_base;
	int	result;
	int	x;

	len_base = 0;
	result = 0;
	while (base[len_base])
	{
		len_base++;
	}
	while (str[i])
	{
		x = ft_isbase(str[i], base);
		if (x == -1)
			return (result);
		else
		{
			result *= len_base;
			result += x;
			i++;
		}
	}
	return (result);
}

int	ft_checkspaces(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\f'
			|| str[i] == '\n' || str[i] == '\r'
			|| str[i] == '\t' || str[i] == '\v')
		{
			i++;
		}
		else
			return (i);
	}
	return (-1);
}

int	ft_checkbase(char *base)
{
	int	len;
	int	x;

	len = 0;
	while (base[len])
	{
		if (base[len] == '+' || base[len] == '-' || base[len] == ' ')
			return (-1);
		x = len + 1;
		while (base[x])
		{
			if (base[len] == base[x])
				return (-1);
			x++;
		}
		len++;
	}
	if (len == 0)
		return (-1);
	else
		return (1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	mult;

	if (ft_checkbase(base) == -1)
		return (0);
	mult = 1;
	i = ft_checkspaces(str);
	if (i == -1)
		return (2);
	while (str[i])
	{
		if (str[i] == '-')
		{
			mult *= -1;
			i++;
		}
		else if (str[i] == '+')
			i++;
		else if (ft_isbase(str[i], base) >= 0)
			return (ft_converter(str, base, i) * mult);
		else
			return (0);
	}
	return (1);
}

// #include <stdio.h>
// int main()
// {
// 	printf("%d\n", ft_atoi_base("10010111001", "1"));
// 	return 0;
// }
int	check_spaces(char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n' || str[i] == '\r'
		 || str[i] == '\t' || str[i] == '\v')
	{
		i++;
	}
	return (i);
}

int	do_atoi(char *str, int num, int i, int mult)
{
	while (str[i] >= '0' && str[i] <= '9')
	{
		num *= 10;
		num += str[i] - 48;
		i++;
	}
	num *= mult;
	return (num);
}

int	ft_atoi(char *str)
{
	int	i;
	int	mult;
	int	num;

	mult = 1;
	i = check_spaces(str);
	num = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			return (do_atoi(str, num, i, mult));
		if (str[i] == '-')
		{
			mult *= -1;
			i++;
		}
		else if (str[i] == '+')
			i++;
		else
			return (0);
	}
	return (0);
}

// #include <stdio.h>
// int main()
// {
// 	printf("%d\n", ft_atoi(" \n  +  \f    \r\t +123"));
// 	return 0;
// }
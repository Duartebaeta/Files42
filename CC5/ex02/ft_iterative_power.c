int ft_iterative_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else if (power == 1)
		return (nb);
	else
	{
		while (power > 1)
		{
			nb *= nb;
			power--;
		}
		return (nb);
	}
}

// #include <stdio.h>
// int main()
// {
// 	printf("%d\n", ft_iterative_power(4, 0));
// 	return 0;
// }

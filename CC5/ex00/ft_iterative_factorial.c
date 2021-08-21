int	ft_iterative_factorial(int nb)
{
	int	c;

	if (nb < 0)
		return (0);
	c = nb;
	while (c > 1)
	{
		nb *= c - 1;
		c--;
	}
	return (nb);
}

// #include <stdio.h>
// int main()
// {
// 	printf("%i\n", ft_iterative_factorial(-1));
// 	return 0;
// }

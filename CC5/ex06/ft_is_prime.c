int ft_is_prime(int nb)
{
	int	i;
	int counter;

	if (nb <= 1)
		return (0);
	i = 1;
	counter = 0;
	while (i <= nb)
	{
		if (nb % i == 0)
			counter++;
		if (counter > 2)
			break;
		i++;
	}
	if (counter == 2)
		return (1);
	else
		return (0);
}

// #include <stdio.h>
// int main()
// {
// 	printf("%d\n", ft_is_prime(998939947));
// 	return 0;
// }

#include <stdio.h>
int ft_is_prime(int nb)
{
	int	i;
	int counter;

	if (nb <= 1)
		return (0);
	i = 1;
	counter = 0;
	while (i <= nb / 2)
	{
		if (nb % i == 0)
			counter++;
		if (counter > 1)
			break;
		i++;
	}
	if (counter == 1)
		return (1);
	else
		return (0);
}

int ft_find_next_prime(int nb)
{
	if (nb <= 1)
		return (2);
	while (nb <= 2147483647)
	{
		if (ft_is_prime(nb))
			return (nb);
		else
			nb++;
	}
	return (0);
}

// int main()
// {
// 	printf("%d\n", ft_find_next_prime(2147483647));
// 	return 0;
// }

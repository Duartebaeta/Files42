int ft_recursive_power(int nb, int power)
{
	int to_power; 

	if (power == 0)
		return (1);
	else if (power == 1)
		return (nb);
	else
	{
		to_power = nb * ft_recursive_power(nb, power - 1); 
		return (to_power);
	}
}

// #include <stdio.h>
// int main()
// {
// 	printf("%d\n", ft_recursive_power(5, 3));
// 	return 0;
// }

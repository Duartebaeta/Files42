int ft_recursive_factorial(int nb)
{
	int fact;

	if (nb == 1)
		return (1);
	else if (nb > 16)
		return (0);
	else
	{
		fact = nb * ft_recursive_factorial(nb - 1);
		return (fact);
	}
}

// #include <stdio.h>
// int main()
// {
// 	printf("%d\n", ft_recursive_factorial(-17));
// 	return 0;
// }

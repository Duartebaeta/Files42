#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	test;

	test = nb;
	if (nb < 0)
	{
		ft_putchar('-');
		test *= -1;
	}
	if (test > 9)
	{
		ft_putnbr(test / 10);
		ft_putchar(test % 10 + '0');
	}
	else
	{
		ft_putchar(test + '0');
	}
}

// int main()
// {
// 	ft_putnbr(-2);
// 	return 0;
// }
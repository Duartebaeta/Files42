int ft_sqrt(int nb)
{
	int	i;
	int sqr;

	sqr = 1;
	i = 0;
	while (nb > 0)
	{
		nb -= (sqr);
		sqr += 2;
		i++;
	}
	if (nb == 0)
		return (i);
	else
		return 0;
}

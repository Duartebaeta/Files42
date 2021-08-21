/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhomem-d <dhomem-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 15:16:33 by dhomem-d          #+#    #+#             */
/*   Updated: 2021/08/12 10:58:07 by dhomem-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	test;

	test = nb;
	printf("%u\n", test);
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
// 	ft_putnbr(-2147483648);
// 	return 0;
// }

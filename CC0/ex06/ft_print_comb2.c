/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhomem-d <dhomem-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 15:42:13 by dhomem-d          #+#    #+#             */
/*   Updated: 2021/08/10 17:11:06 by dhomem-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(int a, int b, int c, int d)
{
	if ((a < c) || (a == c && b < d))
	{
		if (a == '9' && b == '8' && c == '9' && d == '9')
		{
			ft_putchar(a);
			ft_putchar(b);
			ft_putchar(' ');
			ft_putchar(c);
			ft_putchar(d);
		}
		else
		{
			ft_putchar(a);
			ft_putchar(b);
			ft_putchar(' ');
			ft_putchar(c);
			ft_putchar(d);
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_turnchar(int a, int b)
{
	int		a0;
	int		b0;

	a0 = a % 10;
	b0 = b % 10;
	a = a / 10;
	b = b / 10;
	a = a + '0';
	b = b + '0';
	a0 = a0 + '0';
	b0 = b0 + '0';
	ft_print(a, a0, b, b0);
}

void	ft_print_comb2(void)
{
	int		num[2];

	num[0] = 0;
	num[1] = 0;
	while (num[0] <= 98)
	{
		while (num[1] <= 99)
		{
			ft_turnchar(num[0], num[1]);
			num[1]++;
		}
		num[0]++;
		num[1] = 0;
	}
}

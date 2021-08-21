/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhomem-d <dhomem-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 16:30:48 by dhomem-d          #+#    #+#             */
/*   Updated: 2021/08/10 17:14:15 by dhomem-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_print(int number, int size, int max)
{
	int		test;

	test = number;
	if (size > 1)
	{
		test = number % 10;
		ft_print(number / 10, size - 1, max);
	}
	ft_putchar(test + '0');
}

int	ft_check(int number, int size)
{
	int		sub;
	int		sub2;
	int		counter;

	sub = number;
	sub2 = number / 10;
	counter = 0;
	while (counter < size)
	{
		if ((sub % 10 > sub2 % 10) || size == 1)
		{
			sub = sub / 10;
			sub2 = sub2 / 10;
			counter++;
			if (counter == size - 1 || size == 1)
			{
				return (1);
			}
		}
		else
		{
			return (0);
		}
	}
	return (0);
}

void	ft_print_combn(int n)
{
	int		max[9];
	int		number;

	max[0] = 9;
	max[1] = 89;
	max[2] = 789;
	max[3] = 6789;
	max[4] = 56789;
	max[5] = 456789;
	max[6] = 3456789;
	max[7] = 23456789;
	max[8] = 123456789;
	number = 0;
	while (number <= max[n - 1])
	{
		if (ft_check(number, n))
		{
			ft_print(number, n, max[n - 1]);
			if (number != max[n - 1])
			{
				write(1, ", ", 2);
			}
		}
		++number;
	}	
}

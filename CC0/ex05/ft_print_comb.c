/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhomem-d <dhomem-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 10:12:28 by dhomem-d          #+#    #+#             */
/*   Updated: 2021/08/12 10:56:05 by dhomem-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print(int i, int j, int k)
{
	if (i == '7')
	{
		ft_putchar(i);
		ft_putchar(j);
		ft_putchar(k);
	}
	else
	{	
		ft_putchar(i);
		ft_putchar(j);
		ft_putchar(k);
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char	 i;
	char	 j;
	char	 k;

	i = '0';
	j = '1';
	k = '2';
	while (i <= '7')
	{
		while (j <= '8')
		{
			while (k <= '9')
			{
				ft_print(i, j, k);
				k++;
			}
			j++;
			k = j + 1;
		}
		j = i++ + 1;
	}
}

#include <unistd.h>
#include <stdio.h>
void	ft_print(char *string)
{
	int	i;

	i = 0;
	while (string[i])
	{
		write(1, &string[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] == s2[i])
		{
			i++;
		}
		else if (s1[i] > s2[i])
		{
			return (1);
		}
		else
		{
			return (-1);
		}
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	int		i;
	int		x;
	char	*swap;

	i = 1;
	while (i < argc)
	{
		x = i + 1;
		while (x < argc)
		{
			if (ft_strcmp(argv[i], argv[x]) == 1)
			{
				swap = argv[i];
				argv[i] = argv[x];
				argv[x] = swap;
			}
			x++;
		}
		ft_print(argv[i]);
		i++;
	}
	return (0);
}

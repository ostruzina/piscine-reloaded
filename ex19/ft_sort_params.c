/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: verosvec <verosvec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/22 17:35:01 by verosvec          #+#    #+#             */
/*   Updated: 2026/08/22 20:21:32 by verosvec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	k;
	int	difference;

	k = 0;
	difference = 0;
	while (s1[k] == s2[k])
	{
		if (s1[k] == '\0')
		{
			return (difference);
		}
		k++;
	}
	difference = s1[k] - s2[k];
	return (difference);
}

void	ft_swap(char **a, char **b)
{
	char	*stored;

	stored = *a;
	*a = *b;
	*b = stored;
}

void	print_arg(char *arg)
{
	int	m;

	m = 0;
	while (arg[m] != '\0')
	{
		write(1, &arg[m], 1);
		m++;
	}
	write(1, "\n", 1);
}

void	sort_args(int argc, char **argv)
{
	int	i;
	int	j;
	int	flag;

	i = argc - 1;
	j = 1;
	flag = 0;
	while (i > 1)
	{
		j = 1;
		while (j < i)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
			{
				ft_swap(&argv[j], &argv[j + 1]);
				flag = 1;
			}
			j++;
		}
		if (flag == 0)
			break ;
		flag = 0;
		i--;
	}
}

int	main(int argc, char **argv)
{
	int	n;

	sort_args(argc, argv);
	n = 1;
	while (n < argc)
	{
		print_arg(argv[n]);
		n++;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: verosvec <verosvec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 18:52:22 by verosvec          #+#    #+#             */
/*   Updated: 2026/08/22 17:08:49 by verosvec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>

int	ft_iterative_factorial(int nb)
{
	int		i;
	long	long_result;
	int		int_result;

	if (nb < 0)
		int_result = 0;
	else
	{
		i = 0;
		long_result = 1;
		while (i < nb)
		{
			long_result = long_result * (i + 1);
			if (long_result > INT_MAX)
			{
				long_result = 0;
				break ;
			}
			i++;
		}
		int_result = long_result;
	}
	return (int_result);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d ", ft_iterative_factorial(-1));
// 	printf("%d ", ft_iterative_factorial(0));
// 	printf("%d ", ft_iterative_factorial(1));
// 	printf("%d ", ft_iterative_factorial(3));
// 	printf("%d ", ft_iterative_factorial(11));
// 	printf("%d ", ft_iterative_factorial(12));
// 	printf("%d ", ft_iterative_factorial(13));
// 	printf("%d ", ft_iterative_factorial(INT_MAX));
// }

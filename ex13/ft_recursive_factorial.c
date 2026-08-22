/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: verosvec <verosvec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 13:36:55 by verosvec          #+#    #+#             */
/*   Updated: 2026/08/22 17:08:39 by verosvec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>

int	ft_recursive_factorial(int nb)
{
	long	long_result;
	int		int_result;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb > 10000)
		return (0);
	long_result = nb * (long) ft_recursive_factorial(nb - 1);
	if (long_result > INT_MAX)
		return (0);
	int_result = long_result;
	return (int_result);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d ", ft_recursive_factorial(-1));
// 	printf("%d ", ft_recursive_factorial(0));
// 	printf("%d ", ft_recursive_factorial(1));
// 	printf("%d ", ft_recursive_factorial(3));
// 	printf("%d ", ft_recursive_factorial(11));
// 	printf("%d ", ft_recursive_factorial(12));
// 	printf("%d ", ft_recursive_factorial(13));
// 	printf("%d ", ft_recursive_factorial(INT_MAX));
// }

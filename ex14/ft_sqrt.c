/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: verosvec <verosvec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 17:49:02 by verosvec          #+#    #+#             */
/*   Updated: 2026/08/22 17:07:43 by verosvec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_sqrt(int nb)
{
	int	i;
	int	sqrt_res;

	i = 1;
	sqrt_res = 0;
	if (nb <= 0)
		sqrt_res = 0;
	while (i <= nb)
	{
		if (i == nb / i && nb % i == 0)
		{
			sqrt_res = i;
			break ;
		}
		if (i > nb / i)
		{
			sqrt_res = 0;
			break ;
		}
		i++;
	}
	return (sqrt_res);
}

// #include <stdio.h>
// #include <limits.h>

// int	main(void)
// {
// 	printf("%d ", ft_sqrt(-9));
// 	printf("%d ", ft_sqrt(-8));
// 	printf("%d ", ft_sqrt(0));
// 	printf("%d ", ft_sqrt(1));
// 	printf("%d ", ft_sqrt(2));
// 	printf("%d ", ft_sqrt(3));
// 	printf("%d ", ft_sqrt(4));
// 	printf("%d ", ft_sqrt(5));
// 	printf("%d ", ft_sqrt(8));
// 	printf("%d ", ft_sqrt(9));
// 	printf("%d ", ft_sqrt(16));
// 	printf("%d ", ft_sqrt(81));
// 	printf("%d ", ft_sqrt(80550625));
// 	printf("%d ", ft_sqrt(80550626));
// 	printf("%d ", ft_sqrt(INT_MAX));
// }

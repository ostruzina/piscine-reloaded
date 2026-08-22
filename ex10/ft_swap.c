/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: verosvec <verosvec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 18:01:05 by verosvec          #+#    #+#             */
/*   Updated: 2026/08/20 18:07:04 by verosvec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	stored;

	stored = *a;
	*a = *b;
	*b = stored;
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	x = 3;
// 	int	y = 8;

// 	printf("%d %d \n", x, y);
// 	ft_swap(&x, &y);
// 	printf("%d %d \n", x, y);
// }

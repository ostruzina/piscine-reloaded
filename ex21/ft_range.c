/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: verosvec <verosvec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/22 17:35:16 by verosvec          #+#    #+#             */
/*   Updated: 2026/08/23 22:11:18 by verosvec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <limits.h>

int	*ft_range(int min, int max)
{
	int		*result;
	long	result_size;
	int		i;

	if (min >= max)
		return (NULL);
	result_size = ((long) max - (long) min);
	if (result_size > INT_MAX)
		return (NULL);
	result = malloc(sizeof(int) * result_size);
	if (!result)
		return (NULL);
	i = 0;
	while (min < max)
	{
		result[i] = min;
		i++;
		min++;
	}
	return (result);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int *test_result;
// 	int	j;
// 	int	min = INT_MIN;
// 	int	max = INT_MAX;

// 	test_result = ft_range(min, max);
// 	if (test_result == NULL)
// 	{
// 		printf("Test result is NULL\n");
// 	}
// 	else
// 	{
// 		j = 0;
// 		while (j < (max - min))
// 		{
// 			printf("%d ", test_result[j]);
// 			j++;
// 		}
// 	}
// 	free(test_result);
// }

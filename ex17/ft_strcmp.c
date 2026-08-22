/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: verosvec <verosvec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/22 17:34:26 by verosvec          #+#    #+#             */
/*   Updated: 2026/08/22 17:47:48 by verosvec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	j;
	int	difference;

	j = 0;
	difference = 0;
	while (s1[j] == s2[j])
	{
		if (s1[j] == '\0')
		{
			return (difference);
		}
		j++;
	}
	difference = s1[j] - s2[j];
	return (difference);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	test1[] = "Hello";
// 	char	test2[] = "Hello";
// 	char	test3[] = "bye";
// 	char	test4[] = "Hello world";
// 	char	test5[] = "";
// 	char 	test6[] = " ";
// 	char	test7[] = "";
// 	char	test8[] = "Hella";

// 	printf("%d ", ft_strcmp(test1, test2));
// 	printf("%d ", ft_strcmp(test1, test3));
// 	printf("%d ", ft_strcmp(test4, test1));
// 	printf("%d ", ft_strcmp(test1, test5));
// 	printf("%d ", ft_strcmp(test6, test1));
// 	printf("%d ", ft_strcmp(test5, test7));
// 	printf("%d ", ft_strcmp(test1, test8));
// }

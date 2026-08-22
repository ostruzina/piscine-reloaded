/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: verosvec <verosvec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/19 19:11:13 by verosvec          #+#    #+#             */
/*   Updated: 2026/08/20 17:47:52 by verosvec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	c;

	if (n >= 0)
	{
		c = 'P';
	}
	else
		c = 'N';
	write(1, &c, 1);
}

// int	main(void)
// {
// 	ft_is_negative(-2);
// 	ft_is_negative(6);
// 	ft_is_negative(0);
// 	return (0);
// }

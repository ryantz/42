/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryatan <ryatan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 12:54:49 by ryatan            #+#    #+#             */
/*   Updated: 2025/10/21 13:13:07 by ryatan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	count;

	i = 1;
	count = 0;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	while (count < power)
	{
		i *= nb;
		count++;
	}
	return (i);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_iterative_power(10, 4));
}
*/

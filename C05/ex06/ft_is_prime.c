/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryatan <ryatan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 13:53:43 by ryatan            #+#    #+#             */
/*   Updated: 2025/10/21 14:03:05 by ryatan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Prime is only divisible by itself and 1
int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb == 1 || nb == 0)
		return (0);
	else
	{
		while (i < nb)
		{
			if ((nb % i != 0) && (nb % nb == 0))
			{
			}
			else
				return (0);
			i++;
		}
		return (1);
	}
}

/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_is_prime(11));
}
*/

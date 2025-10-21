/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryatan <ryatan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 13:47:02 by ryatan            #+#    #+#             */
/*   Updated: 2025/10/21 13:53:19 by ryatan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	guess;

	guess = 1;
	while (guess < nb)
	{
		if ((guess * guess) == nb)
			return (guess);
		guess++;
	}
	return (0);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_sqrt(49));
}
*/

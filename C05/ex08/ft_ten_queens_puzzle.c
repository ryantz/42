/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryatan <ryatan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 14:08:46 by ryatan            #+#    #+#             */
/*   Updated: 2025/10/22 00:18:05 by ryatan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
 * Queen is placed in every row
 * If a queen is placed,
 * same row cannot have a queen
 * same col cannot have a queen
 * + i col, + i row pos cannot have a queen
 *
 * row is a pos in a string 0 - 9
 * col is a value in the string 0 - 9
 */
int	ft_ten_queens_puzzle(void)
{
	char	board[11];
	int	row;
	int	col;
	int	i;

	row = 0;
	col = 0;
	while (i < 11)
	{
		board[i] = '0';
		i++;
	}
	
	return (0);
}

int	main(void)
{
	ft_ten_queens_puzzle();
}

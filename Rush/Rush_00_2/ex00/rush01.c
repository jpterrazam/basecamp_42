/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-d <jpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 02:09:59 by jpaulo-d          #+#    #+#             */
/*   Updated: 2022/02/05 19:31:22 by jpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_putchar.c"

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	while (i < x)
	{
		j = 0;
		while (j < y)
		{
			if (i == 0 && j == 0) ft_putchar ('x'); //canto superior esquerdo
			else if (i == 0 && j == y-1) ft_putchar ('y'); //canto superior direito 
			else if (i == 0 && j != 0 && j != y-1) ft_putchar ('a'); //lado superior (-cantos)
			else if (i == x-1 && j == 0) ft_putchar ('z'); //canto inferior esquerdo 
			else if (i == x-1 && j == y-1) ft_putchar ('w'); //canto inferior direito
			else if (i == x-1 && j != 0 && j != y-1) ft_putchar ('a'); //lado inferior (-cantos)
			else if (i != 0 && i != x-1 && j == 0) ft_putchar ('b'); //lado esquerdo (-cantos)
			else if (i != x-1 && i != x-1 && j == y-1) ft_putchar ('b'); //lado direito (-cantos)
			else ft_putchar (' ');
			
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
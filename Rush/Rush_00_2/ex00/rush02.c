/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-d <jpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 02:09:59 by jpaulo-d          #+#    #+#             */
/*   Updated: 2022/02/05 20:16:57 by jpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	higher(int column, int column_max)
{
	if (column == 0)
	{
		ft_putchar ('x'); //canto superior esquerdo
	}
	else if (column == column_max)
	{
		ft_putchar ('y'); //canto superior direito
	}
	else
	{
		ft_putchar ('a'); //lado superior (-cantos)
	}
}

void	bottom(int column, int column_max)
{
	if (column == 0)
	{
		ft_putchar ('z'); //canto inferior esquerdo
	}
	else if (column == column_max)
	{
		ft_putchar ('w'); //canto inferior direito
	}
	else
	{
		ft_putchar ('a'); //lado inferior (-cantos)
	}
}

void	middle(int column, int column_max)
{
	if (column == 0)
	{
		ft_putchar ('b'); //lado esquerdo (-cantos)
	}
	else if (column == column_max)
	{
		ft_putchar ('b'); //lado direito (-cantos)
	}
	else
	{
		ft_putchar (' ');
	}
}

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
			if (i == 0)
			{
				higher(j, y - 1);
			}
			else if (i == x - 1)
			{
				bottom(j, y - 1);
			}
			else
			{
				middle(j, y - 1);
			}
			j++;
		}
		write(1, "\n", 1);
		i++;
	}

}

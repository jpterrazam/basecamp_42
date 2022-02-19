/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-d <jpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 02:09:59 by jpaulo-d          #+#    #+#             */
/*   Updated: 2022/02/05 20:34:23 by jpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	

void	higher(int column, int column_max)
{
	if (column == 0)
		ft_putchar ('x');
	else if (column == column_max)
		ft_putchar ('y');
	else
		ft_putchar ('a');
}

void	bottom(int column, int column_max)
{
	if (column == 0)
		ft_putchar ('z');
	else if (column == column_max)
		ft_putchar ('w');
	else
		ft_putchar ('a');
}

void	middle(int column, int column_max)
{
	if (column == 0)
		ft_putchar ('b');
	else if (column == column_max)
		ft_putchar ('b');
	else
		ft_putchar ('K');
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
				higher(j, y - 1);
			else if (i == x - 1)
				bottom(j, y - 1);
			else
				middle(j, y - 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

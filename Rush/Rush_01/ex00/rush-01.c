/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-d <jpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 22:38:29 by jpaulo-d          #+#    #+#             */
/*   Updated: 2022/02/14 15:11:46 by jpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_error(void)
{
	write(1, "Error\n", 6);
}

void	insert_spaces(char tab[6][6])
{
	int	l;
	int	c;

	l = 0;
	while (l < 6)
	{
		c = 0;
		while (c < 6)
		{
			tab[l][c] = ' ';
			c++;
		}
		l++;
	}
}

int	get_observers(char *pack, int *cut)
{
	int	i;

	i = 0;
	while (i <= 30)
	{
		if (i % 2 == 0)
		{
			if (pack[i] >= '1' && pack[i] <= '4')
				cut[i / 2] = pack[i] - '0';
			else
				return (1);
		}
		else
		{
			if (pack[i] != ' ')
			{
				return (1);
			}
		}
		i++;
	}
	return (0);
}

void	fill_observers(char t[6][6], int *o)
{
	t[0][1] = o[0] + '0';
	t[0][2] = o[1] + '0';
	t[0][3] = o[2] + '0';
	t[0][4] = o[3] + '0';
	t[5][1] = o[4] + '0';
	t[5][2] = o[5] + '0';
	t[5][3] = o[6] + '0';
	t[5][4] = o[7] + '0';
	t[1][0] = o[8] + '0';
	t[2][0] = o[9] + '0';
	t[3][0] = o[10] + '0';
	t[4][0] = o[11] + '0';
	t[1][5] = o[12] + '0';
	t[2][5] = o[13] + '0';
	t[3][5] = o[14] + '0';
	t[4][5] = o[15] + '0';
}

void	ft_printarray(char t[6][6])
{
	int	l;
	int	c;

	l = 0;
	while (l < 6)
	{
		c = 0;
		while (c < 6)
		{
			write(1, " ", 1);
			write(1, &t[l][c], 1);
			c++;
		}
		l++;
		write(1, "\n", 1);
	}
}

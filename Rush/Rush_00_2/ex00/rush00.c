/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-d <jpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 02:09:59 by jpaulo-d          #+#    #+#             */
/*   Updated: 2022/02/06 20:21:43 by jpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

char	g_charact [5][6] = {
{'o', 'o', 'o', 'o', '-', '|'},
{'/', '\\', '\\', '/', '*', '*'},
{'A', 'A', 'C', 'C', 'B', 'B'},
{'A', 'C', 'A', 'C', 'B', 'B'},
{'A', 'C', 'C', 'A', 'B', 'B'}
};

int		g_theme;
int		g_theme = 5;

void	theme(int number)
{
	if (number <= 4)
		g_theme = number;
}

void	top(int column, int column_max)
{
	if (column == 0)
		ft_putchar (g_charact[g_theme][0]);
	else if (column == column_max)
		ft_putchar (g_charact[g_theme][1]);
	else
		ft_putchar (g_charact[g_theme][4]);
}

void	bottom(int column, int column_max)
{
	if (column == 0)
		ft_putchar (g_charact[g_theme][2]);
	else if (column == column_max)
		ft_putchar (g_charact[g_theme][3]);
	else
		ft_putchar (g_charact[g_theme][4]);
}

void	middle(int column, int column_max)
{
	if (column == 0)
		ft_putchar (g_charact[g_theme][5]);
	else if (column == column_max)
		ft_putchar (g_charact[g_theme][5]);
	else
		ft_putchar (' ');
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	if (y >= 1 && x >= 1 && (g_theme >= 0 && g_theme <= 4))
	{
		i = 0;
		while (i < y)
		{
			j = 0;
			while (j < x)
			{
				if (i == 0)
					top(j, x - 1);
				else if (i == y - 1)
					bottom(j, x - 1);
				else
					middle(j, x - 1);
				j++;
			}
			write(1, "\n", 1);
			i++;
		}
	}
	else
		write(1, "Valores inválidos para os parâmetros\n", 39);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-d <jpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 20:53:08 by jpaulo-d          #+#    #+#             */
/*   Updated: 2022/02/18 23:08:52 by jpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// max int ->  2.147.483.647
// min int -> -2.147.483.648

void	ft_print_array_invert(char *c, int j)
{
	while (j >= 0)
	{
		write(1, &c[j], 1);
		j--;
	}
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check_base(char *base)
{
	char	*curr;
	int		i;
	int		j;

	curr = base;
	if (ft_strlen(base) <= 1)
		return (0);
	while (*curr)
	{
		if (*curr == '-' || *curr == '+' || *curr <= ' ')
			return (0);
		curr++;
	}
	i = 0;
	while (i < curr - base)
	{
		j = i + 1;
		while (j < curr - base)
			if (base[i] == base[j++])
				return (0);
		i++;
	}
	return (ft_strlen(base));
}

void	ft_putnbr_base(int nbr, char *base)
{
	char		c_n[50];
	int			i;
	int			n_base;
	long int	long_nbr;

	long_nbr = nbr;
	n_base = check_base(base);
	if (n_base >= 2)
	{
		i = 0;
		if (long_nbr < 0)
		{
			write(1, "-", 1);
			long_nbr = long_nbr * -1;
		}	
		while (long_nbr >= n_base)
		{
			c_n[i] = base[long_nbr % n_base];
			long_nbr = (long_nbr / n_base);
			i++;
		}
		c_n[i] = base[long_nbr % n_base];
		ft_print_array_invert(c_n, i);
	}
}

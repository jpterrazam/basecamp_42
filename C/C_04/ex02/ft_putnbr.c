/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-d <jpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 20:53:14 by jpaulo-d          #+#    #+#             */
/*   Updated: 2022/02/18 23:06:54 by jpaulo-d         ###   ########.fr       */
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

void	ft_putnbr(int nb)
{
	char	c_n[10];
	int		i;

	i = 0;
	if (nb == -2147483648)
	{
		write(1, "-2", 2);
		nb = 147483648;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * -1;
	}	
	while (nb >= 10)   1234   - 4 3 2 1 
	{
		c_n[i] = ((nb % 10) + '0');
		nb = (nb / 10);
		i++;
	}
	c_n[i] = ((nb % 10) + '0');
	ft_print_array_invert(c_n, i);
}

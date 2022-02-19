/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-d <jpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 23:55:45 by jpaulo-d          #+#    #+#             */
/*   Updated: 2022/02/12 21:21:46 by jpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	int		n1;
	int		n2;
	char	c_n1[2];
	char	c_n2[2];

	n1 = 0;
	while (n1 <= 98)
	{
		n2 = n1 + 1;
		while (n2 <= 99)
		{
			c_n1[0] = n1 / 10 + '0';
			c_n1[1] = n1 % 10 + '0';
			c_n2[0] = n2 / 10 + '0';
			c_n2[1] = n2 % 10 + '0';
			write (1, c_n1, 2);
			write (1, " ", 1);
			write (1, c_n2, 2);
			if ((n1 != 98))
				write (1, ", ", 2);
			n2++;
		}
		n1++;
	}
}

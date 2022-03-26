/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-d <jpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 00:22:59 by jpaulo-d          #+#    #+#             */
/*   Updated: 2022/02/17 17:55:29 by jpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putnbr_base(int nbr, char *base);

int main (void)
{
	ft_putnbr_base(2147483647, "0123456789ABCDEF");
	write(1, "\n", 1);
	ft_putnbr_base(0, "0123456789");
	write(1, "\n", 1);
	ft_putnbr_base(446654, "abcdefghijklmnopqrstuvwxyz");
	write(1, "\n", 1);
	return (0);
}

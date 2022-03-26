/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-d <jpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 20:24:53 by jpaulo-d          #+#    #+#             */
/*   Updated: 2022/02/18 12:44:26 by jpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int ft_recursive_power(int nb, int power);

int main (void)
{
	int	b = 12;
	int	p = 8;
	printf("%d^%d = %d", b, p, ft_recursive_power(b, p));
}

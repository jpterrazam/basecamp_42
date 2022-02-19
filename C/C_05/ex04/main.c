/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-d <jpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 20:24:53 by jpaulo-d          #+#    #+#             */
/*   Updated: 2022/02/18 23:38:43 by jpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int ft_fibonacci(int index);

int main (void)
{
	int	n = 5;
	printf("O %dº número na sequencia de Fibonacci é %d\n", n, ft_fibonacci(n));
}

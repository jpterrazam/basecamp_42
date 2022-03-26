/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-d <jpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 20:24:53 by jpaulo-d          #+#    #+#             */
/*   Updated: 2022/02/18 02:34:00 by jpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int ft_recursive_factorial(int nb);

int main (void)
{
	int	n = 6;
	printf("%d! = %d", n, ft_recursive_factorial(n));
}

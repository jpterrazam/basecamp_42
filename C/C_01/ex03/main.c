/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-d <jpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 02:57:56 by jpaulo-d          #+#    #+#             */
/*   Updated: 2022/02/16 15:21:41 by jpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int main (void)
{
	int a = 13;
	int b = 5;
	int div;
	int mod;

	ft_div_mod(a, b, &div, &mod);

	printf("%d / %d = %d resto: %d\n", a, b, div, mod);
	
}

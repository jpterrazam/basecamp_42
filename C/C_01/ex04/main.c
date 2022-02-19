/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-d <jpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 17:42:19 by jpaulo-d          #+#    #+#             */
/*   Updated: 2022/02/10 17:59:42 by jpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int main (void)
{
	int a = 43;
	int b = 2;

	printf("%d / %d = ", a, b);

	ft_ultimate_div_mod(&a, &b);

	printf("%d resto: %d\n", a, b);

	
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-d <jpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 02:41:20 by jpaulo-d          #+#    #+#             */
/*   Updated: 2022/02/14 00:41:44 by jpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main (void)
{
	int r;
	char str[] = "647474";

	r = ft_str_is_numeric(str);

	printf("A string %s tem só números? %d (1 sim / 0 não)\n", str, r);
	
	char str2[] = "b47474";

	r = ft_str_is_numeric(str2);

	printf("A string %s tem só números? %d (1 sim / 0 não)\n", str2, r);
	return (0);
}
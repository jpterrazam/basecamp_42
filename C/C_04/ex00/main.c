/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-d <jpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 00:23:11 by jpaulo-d          #+#    #+#             */
/*   Updated: 2022/02/17 00:33:22 by jpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(char *str);

int main (void)
{
	int num_caract;
	
	char a[] = "batata";
	num_caract = ft_strlen(a);

	printf("%s tem %d caracteres\n", a, num_caract);
}

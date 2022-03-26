/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-d <jpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 02:41:20 by jpaulo-d          #+#    #+#             */
/*   Updated: 2022/02/15 02:50:35 by jpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main (void)
{
	char	string1[]= "batata";
	char	string2[27];

	printf("Origem : %s ---> ", string1);
	ft_strlcpy(string2, string1, 7);
	printf("Destino : %s\n", string2);
}
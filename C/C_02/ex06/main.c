/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-d <jpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 02:41:20 by jpaulo-d          #+#    #+#             */
/*   Updated: 2022/02/15 15:17:31 by jpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main (void)
{
	int r;
	char str[] = "batata";

	r = ft_str_is_printable(str);

	printf("A string %s tem só caracteres imprimiveís? %d (1 sim / 0 não)\n", str, r);

	char str2[] = "bat\tata";

	r = ft_str_is_printable(str2);

	printf("A string %s tem só caracteres imprimiveís? %d (1 sim / 0 não)\n", str2, r);
	return (0);
}

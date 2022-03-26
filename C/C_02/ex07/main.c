/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-d <jpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 02:41:20 by jpaulo-d          #+#    #+#             */
/*   Updated: 2022/02/14 21:32:13 by jpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str);

int	main (void)
{
	char str[] = "batata";
	char *str_up;

	printf("%s ---> ", str);

	str_up = ft_strupcase(str);

	printf("%s\n", str_up);

	return (0);
}
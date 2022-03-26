/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-d <jpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 02:41:20 by jpaulo-d          #+#    #+#             */
/*   Updated: 2022/02/14 21:51:15 by jpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str);

int	main (void)
{
	char str[] = "BATATA";
	char *str_low;

	printf("%s ---> ", str);

	str_low = ft_strlowcase(str);

	printf("%s\n", str_low);

	return (0);
}
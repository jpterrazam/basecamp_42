/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-d <jpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 17:05:51 by jpaulo-d          #+#    #+#             */
/*   Updated: 2022/02/17 18:46:21 by jpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main (void)
{
	char *str1;
	char *str2;
	unsigned int n;

	n = 5;
	str1 = "BatatA";
	str2 = "Batata";
	printf("strncmp    : %d\n", strncmp(str1, str2, n));
	printf("ft_strncmp : %d\n", ft_strncmp(str1, str2, n));
	return(1);
}

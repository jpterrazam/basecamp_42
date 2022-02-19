/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-d <jpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 17:05:51 by jpaulo-d          #+#    #+#             */
/*   Updated: 2022/02/16 13:12:39 by jpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2);

int main (void)
{
	char *str1;
	char *str2;

	str1 = "Ba$tata";
	str2 = "BatatA";
	printf("strcmp    : %d\n", strcmp(str1, str2));
	printf("ft_strcmp : %d\n", ft_strcmp(str1, str2));
	return(1);
}

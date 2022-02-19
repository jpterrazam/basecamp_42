/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-d <jpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 17:05:51 by jpaulo-d          #+#    #+#             */
/*   Updated: 2022/02/16 13:20:29 by jpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strcat(char *dest, char *src);

int main (void)
{
	char	dest[100]= "Batata";
	char	dest2[100]= "Batata";
	char	src[]= " frita!";

	printf("strcat    : %s\n", strcat(dest, src));
	printf("ft_strcat : %s\n", ft_strcat(dest2, src));
	return(1);
}

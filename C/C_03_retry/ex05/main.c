/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-d <jpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 17:05:51 by jpaulo-d          #+#    #+#             */
/*   Updated: 2022/02/17 20:01:33 by jpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/string.h>
#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char str1[20] = "Batata";
	char str2[] = " Frita";
	char str3[20] = "Batata";
	char str4[] = " Frita";

	printf("ft_strlcat : \"%s\" tem %d caracteres\n", str1, ft_strlcat(str1, str2, 13));
	printf("strlcat    : \"%s\" tem %ld caracteres\n", str3, strlcat(str3, str4, 13));

}
